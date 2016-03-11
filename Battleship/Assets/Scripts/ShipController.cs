using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ShipController : MonoBehaviour {

	public int size;
	public List<GridSquare> gridSquares; // The first GridSquare in the list is the anchor
	public bool sunk;
	public string shipName;
	private bool followFinger = false;
	private Plane plane = new Plane(Vector3.up, -1);
	private float distance;
	private string facingDirection;
	private Vector3 startingPosition;

	// Constructors
	public ShipController () {
		size = 0;
		gridSquares = new List<GridSquare> ();
		shipName = "";
	}
	public ShipController (int shipSize, string shipName) {
		size = shipSize;
		gridSquares = new List<GridSquare> ();
		this.shipName = shipName;
	}

	void Start () {
		startingPosition = transform.position;
	}

	// Update is called once per frame
	void Update () {
		if (GameObject.Find ("Grid Generator").GetComponent<GridGenerator> ().inGame) {
			updateSunk ();
		} else {
			if (Input.touchCount > 0) {
				if (Input.touches [0].phase == TouchPhase.Began) {
					Ray ray = Camera.main.ScreenPointToRay (Input.touches[0].position);
					if (plane.Raycast (ray, out distance)) {
						if (!followFinger && !Main.shipIsMoving && GetComponent<BoxCollider> ().bounds.Contains (ray.GetPoint (distance))) {
							followFinger = true;
							Main.shipIsMoving = true;
							Main.movingShip = this;
						}
					}
				}
				if ((Input.touches[0].phase == TouchPhase.Ended || Input.touches[0].phase == TouchPhase.Canceled) && Main.movingShip == this) {
					followFinger = false;
					Main.shipIsMoving = false;
					Main.movingShip = null;
					placeShip (transform.position);
				}
				if (followFinger && Main.shipIsMoving == this && Input.touchCount > 1) {
					Ray ray = Camera.main.ScreenPointToRay (Input.touches[1].position);
					if (plane.Raycast (ray, out distance)) {
						transform.LookAt (ray.GetPoint (distance));
					}
				}
			}
			if (followFinger) {
				Ray ray = Camera.main.ScreenPointToRay (Input.touches[0].position);
				if (plane.Raycast (ray, out distance)) {
					if (shipName == "Submarine") {
						transform.position = new Vector3 (ray.GetPoint (distance).x, 5, ray.GetPoint (distance).z);
					} else {
						transform.position = ray.GetPoint (distance);
					}
				}
			}
		}
	}

	public List<GridSquare> getLegalGridSquares (GridSquare anchor) {
		List<GridSquare> legalGridSquares = new List<GridSquare> ();
		// Add the remaining GridSquare's based on type and orientation
		if (transform.eulerAngles.y > 315 || transform.eulerAngles.y < 45) { // Bow facing north
			facingDirection = "North";
			if (shipName == "Carrier") {
				// Clamp to board
				if (anchor.row > 8)
					anchor.row = 8;
				if (anchor.row < 3)
					anchor.row = 3;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find ((anchor.row + 2) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row + 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 2) + " " + anchor.column).GetComponent <GridSquare> ());
			} else if (shipName == "Battleship") {
				// Clamp to board
				if (anchor.row > 8)
					anchor.row = 8;
				if (anchor.row < 2)
					anchor.row = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find ((anchor.row + 2) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row + 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 1) + " " + anchor.column).GetComponent <GridSquare> ());
			} else if (shipName == "Cruiser" || shipName == "Submarine") {
				// Clamp to board
				if (anchor.row > 9)
					anchor.row = 9;
				if (anchor.row < 2)
					anchor.row = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find ((anchor.row + 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 1) + " " + anchor.column).GetComponent <GridSquare> ());
			} else { // Destroyer
				// Clamp to board
				if (anchor.row > 9)
					anchor.row = 9;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare
				legalGridSquares.Add (GameObject.Find ((anchor.row + 1) + " " + anchor.column).GetComponent <GridSquare> ());
			}
		} else if (transform.eulerAngles.y <= 135) { // Bow facing west
			facingDirection = "West";
			if (shipName == "Carrier") {
				// Clamp to board
				if (anchor.column > 8)
					anchor.column = 8;
				if (anchor.column < 3)
					anchor.column = 3;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 2)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 2)).GetComponent <GridSquare> ());
			} else if (shipName == "Battleship") {
				// Clamp to board
				if (anchor.column > 9)
					anchor.column = 9;
				if (anchor.column < 3)
					anchor.column = 3;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 2)).GetComponent <GridSquare> ());
			} else if (shipName == "Cruiser" || shipName == "Submarine") {
				// Clamp to board
				if (anchor.column > 9)
					anchor.column = 9;
				if (anchor.column < 2)
					anchor.column = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 1)).GetComponent <GridSquare> ());
			} else { // Destroyer
				// Clamp to board
				if (anchor.column < 2)
					anchor.row = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 1)).GetComponent <GridSquare> ());
			}
		} else if (transform.eulerAngles.y <= 225) { // Bow facing south
			facingDirection = "South";
			if (shipName == "Carrier") {
				// Clamp to board
				if (anchor.row > 8)
					anchor.row = 8;
				if (anchor.row < 3)
					anchor.row = 3;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find ((anchor.row + 2) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row + 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 2) + " " + anchor.column).GetComponent <GridSquare> ());
			} else if (shipName == "Battleship") {
				// Clamp to board
				if (anchor.row > 9)
					anchor.row = 9;
				if (anchor.row < 3)
					anchor.row = 3;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find ((anchor.row - 2) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row + 1) + " " + anchor.column).GetComponent <GridSquare> ());
			} else if (shipName == "Cruiser" || shipName == "Submarine") {
				// Clamp to board
				if (anchor.row > 9)
					anchor.row = 9;
				if (anchor.row < 2)
					anchor.row = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find ((anchor.row + 1) + " " + anchor.column).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find ((anchor.row - 1) + " " + anchor.column).GetComponent <GridSquare> ());
			} else { // Destroyer
				// Clamp to board
				if (anchor.row < 2)
					anchor.row = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare
				legalGridSquares.Add (GameObject.Find ((anchor.row - 1) + " " + anchor.column).GetComponent <GridSquare> ());
			}
		} else if (transform.eulerAngles.y <= 315) { // Bow facing east
			facingDirection = "East";
			if (shipName == "Carrier") {
				// Clamp to board
				if (anchor.column > 8)
					anchor.column = 8;
				if (anchor.column < 3)
					anchor.column = 3;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 2)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 2)).GetComponent <GridSquare> ());
			} else if (shipName == "Battleship") {
				// Clamp to board
				if (anchor.column > 8)
					anchor.column = 8;
				if (anchor.column < 2)
					anchor.column = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 2)).GetComponent <GridSquare> ());
			} else if (shipName == "Cruiser" || shipName == "Submarine") {
				// Clamp to board
				if (anchor.column > 9)
					anchor.column = 9;
				if (anchor.column < 2)
					anchor.column = 2;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare's
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 1)).GetComponent <GridSquare> ());
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column - 1)).GetComponent <GridSquare> ());
			} else { // Destroyer
				// Clamp to board
				if (anchor.column > 9)
					anchor.row = 9;
				// Add the (possibly new) anchor first so that it will be in front
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + anchor.column).GetComponent <GridSquare> ());
				// Add the remaining GridSquare
				legalGridSquares.Add (GameObject.Find (anchor.row + " " + (anchor.column + 1)).GetComponent <GridSquare> ());
			}
		}
		return legalGridSquares;
	}

	public Vector3 getLegalPosition (Vector3 rawPosition) {
		Vector3 legalPosition = rawPosition;
		// Anchor x coordinate to GridSquare position
		if (rawPosition.x < -162)
			legalPosition.x = -162;
		else if (rawPosition.x > 162)
			legalPosition.x = 162;
		else {
			for (int i = -162; i < 162; i += 36) {
				if (Mathf.Abs (i - rawPosition.x) <= 18) {
					legalPosition.x = i;
					break;
				}
			}
		}
		// Anchor z coordinate to GridSquare position
		if (rawPosition.z < -200)
			legalPosition.z = -200;
		else if (rawPosition.z > 124)
			legalPosition.z = 124;
		else {
			for (int i = -200; i < 124; i += 36) {
				if (Mathf.Abs (i - rawPosition.z) <= 18) {
					legalPosition.z = i;
					break;
				}
			}
		}
		return legalPosition;
	}

	public void updateSunk () {
		if (!sunk) {
			int hits = 0;
			foreach (GridSquare square in gridSquares) {
				if (square.hit)
					++hits;
			}
			sunk = hits == size;
		}
	}

	public void placeShip (Vector3 rawPosition) {
		bool spotTaken = false;
		Vector3 anchorGridSquarePosition = getLegalPosition (rawPosition);
		// Add the GridSquare's based on the type and orientation of the ship
		GridSquare anchorGridSquare = GameObject.Find ((10 - ((anchorGridSquarePosition.z + 200) / 36)) + " " + (((anchorGridSquarePosition.x + 162) / 36) + 1)).GetComponent<GridSquare> ();
		List<GridSquare> possibleGridSquares = getLegalGridSquares (anchorGridSquare);
		foreach (GridSquare square in possibleGridSquares) {
			if (square.occupied) spotTaken = true;
		}
		if (!spotTaken) {
			gridSquares = possibleGridSquares;
			foreach (GridSquare square in gridSquares) {
				square.occupied = true;
			}
			// Set the ship's position to that of the (possibly new) anchor GridSquare
			GameObject possiblyNewAnchor = GameObject.Find (gridSquares [0].row + " " + gridSquares [0].column);
			transform.position = new Vector3 (possiblyNewAnchor.transform.position.x, transform.position.y, possiblyNewAnchor.transform.position.z);
			// Set the ship's orientation
			float rotationAboutY;
			if (facingDirection == "North") {
				rotationAboutY = 0;
			} else if (facingDirection == "West") {
				rotationAboutY = 90;
			} else if (facingDirection == "South") {
				rotationAboutY = 180;
			} else {
				rotationAboutY = 270;
			}
			transform.eulerAngles = new Vector3 (0, rotationAboutY, 0);
		} else {
			transform.position = startingPosition;
			transform.eulerAngles = Vector3.zero;
		}
	}

	public bool isPlacedLegally () {
		foreach (GridSquare square in gridSquares) {
			if (square.row < 1 || square.row > 10 || square.column < 1 || square.column > 10 || square.occupied) {
				return false;
			}
		}
		return true;
	}

	public bool isNameLegal () {
		if (size == 2 && shipName == "Destroyer") return true;
		if (size == 3 && (shipName == "Cruiser" || shipName == "Submarine")) return true;
		if (size == 4 && shipName == "Battleship") return true;
		if (size == 5 && shipName == "Carrier") return true;
		return false;
	}
}
