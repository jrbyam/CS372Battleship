using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;
using System.Collections.Generic;

public class GridSquare : MonoBehaviour {

	public int row;
	public int column;
	public bool hit = false;
	public bool occupied = false;
	public bool inGame = false;
	private Plane plane = new Plane(Vector3.up, -1);
	private float distance;

	public GridSquare() {
		row = 0;
		column = 0;
		occupied = false;
	}

	public GridSquare(int row, int column) {
		this.row = row;
		this.column = column;
	}

	void Update () {
		if (inGame) { // For gameplay
			// Handle touches
			if (Input.touchCount > 0 && !hit && !GameObject.Find ("Scene Controller").GetComponent<PlayerFireController> ().shotFired) {
				Ray ray = Camera.main.ScreenPointToRay (Input.touches [0].position);
				if (Input.touches [0].phase != TouchPhase.Ended && Input.touches [0].phase != TouchPhase.Canceled) {
					if (plane.Raycast (ray, out distance)) {
						if (GetComponent<BoxCollider> ().bounds.Contains (ray.GetPoint (distance))) { // Press is over this square
							GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.7f);
						} else {
							GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.16f); // Press is over a different square
						}
					}
				} else {
					if (plane.Raycast (ray, out distance)) {
						if (GetComponent<BoxCollider> ().bounds.Contains (ray.GetPoint (distance))) { // Press ended over this square (Shot fired!)
							if (occupied) {
								GameObject explosion = Instantiate (GameObject.Find ("Explosion"));
								explosion.transform.position = transform.position;
								StartCoroutine (DestroyExplosion (explosion));
								if (SceneManager.GetActiveScene ().name == "Player1Fire") {
									foreach (ShipController ship in Main.player2Ships) {
										foreach (GridSquare square in ship.gridSquares) {
											if (row == square.row && column == square.column) {
												square.hit = true;
												break;
											}
										}
									}
								} else {
									foreach (ShipController ship in Main.player1Ships) {
										foreach (GridSquare square in ship.gridSquares) {
											if (row == square.row && column == square.column) {
												square.hit = true;
												break;
											}
										}
									}
								}
							} else {
								if (SceneManager.GetActiveScene ().name == "Player1Fire") {
									Main.player1Misses.Add (this);
								} else {
									Main.player2Misses.Add (this);
								}
								GameObject.Find ("Splash").transform.position = transform.position;
								GameObject.Find ("Splash").GetComponent<ParticleSystem> ().Play ();
							}
							hit = true;
							GameObject.Find ("Scene Controller").GetComponent<PlayerFireController> ().shotFired = true;
						}
					}
				}
			} else {
				if (!hit) {
					GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.16f);
				} else {
					if (occupied) { // If hit and occupied, show red
						GetComponent<Renderer> ().material.color = new Vector4 (1, 0, 0, 0.16f);
					} else { // If hit but not occupied, show blue
						GetComponent<Renderer> ().material.color = new Vector4 (0, 0, 1, 0.16f);
					}
				}
			}
		} else { // For ship placement
			if (Main.shipIsMoving) {
				Ray ray = Camera.main.ScreenPointToRay (Input.touches[0].position);
				if (plane.Raycast (ray, out distance)) {
					Vector3 anchorGridSquarePosition = Main.movingShip.getLegalPosition (ray.GetPoint (distance));
					// Add the GridSquare's based on the type and orientation of the ship
					GridSquare anchorGridSquare = GameObject.Find ((10 - ((anchorGridSquarePosition.z + 200) / 36)) + " " + (((anchorGridSquarePosition.x + 162) / 36) + 1)).GetComponent<GridSquare> ();
					List<GridSquare> currentLegalGridSquares = Main.movingShip.getLegalGridSquares (anchorGridSquare);
					if (currentLegalGridSquares.Contains (this)) {
						GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.7f);
					} else {
						GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.16f);
					}
				}
			} else {
				GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.16f);
			}
		}
	}

	private IEnumerator DestroyExplosion (GameObject explosion) {
		yield return new WaitForSeconds (4);
		Destroy (explosion);
	}

	public bool isPlacedLegally () {
		if (row < 1 || row > 10 || column < 1 || column > 10) return false;
		return true;
	}
}
