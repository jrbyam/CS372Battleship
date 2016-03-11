using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class GridGenerator : MonoBehaviour {

	public bool inGame;

	// Use this for initialization
	void Start () {
		assignGridSquares ();
	}

	// Setup grid at start of each scene
	private void assignGridSquares () {
		for (int i = 1; i <= 10; ++i) {
			for (int j = 1; j <= 10; ++j) {
				GridSquare square = GameObject.Find (i + " " + j).AddComponent<GridSquare> ();
				square.row = i;
				square.column = j;
				// Position each square above the water
				square.gameObject.transform.position = new Vector3 (square.gameObject.transform.position.x, 1, square.gameObject.transform.position.z);
				// Differentiate between GridSquare's in game and GridSquare's for ship placement
				if (inGame) {
					square.inGame = true;
					if (SceneManager.GetActiveScene ().name == "Player1Fire") { // If it's player 1's turn to fire
						foreach (ShipController ship in Main.player2Ships) {
							ship.updateSunk ();
							if (ship.sunk) { // Show burning ship if sunk
								GameObject.Find ("American " + ship.shipName).transform.position = GameObject.Find (ship.gridSquares [0].row + " " + ship.gridSquares [0].column).transform.position;
								// Set the ship's orientation
								float rotationAboutY;
								if (ship.facingDirection == "North") {
									rotationAboutY = 0;
								} else if (ship.facingDirection == "West") {
									rotationAboutY = 90;
								} else if (ship.facingDirection == "South") {
									rotationAboutY = 180;
								} else {
									rotationAboutY = 270;
								}
								GameObject.Find ("American " + ship.shipName).transform.eulerAngles = new Vector3 (0, rotationAboutY, 0);
							}
							// Update each GridSquare based on gridSquares of ship
							foreach (GridSquare shipSquare in ship.gridSquares) {
								if (shipSquare.row == square.row && shipSquare.column == square.column) {
									square.occupied = true;
									square.hit = shipSquare.hit;
								}
							}
						}
						// Update each GridSquare based on saved missed shots
						foreach (GridSquare missedShot in Main.player1Misses) {
							if (missedShot.row == square.row && missedShot.column == square.column) {
								square.hit = true;
							}
						}
					} else { // If it's player 2's turn to fire
						foreach (ShipController ship in Main.player1Ships) {
							ship.updateSunk ();
							if (ship.sunk) {
								GameObject.Find ("Russian " + ship.shipName).transform.position = GameObject.Find (ship.gridSquares [0].row + " " + ship.gridSquares [0].column).transform.position;
								// Set the ship's orientation
								float rotationAboutY;
								if (ship.facingDirection == "North") {
									rotationAboutY = 0;
								} else if (ship.facingDirection == "West") {
									rotationAboutY = 90;
								} else if (ship.facingDirection == "South") {
									rotationAboutY = 180;
								} else {
									rotationAboutY = 270;
								}
								GameObject.Find ("Russian " + ship.shipName).transform.eulerAngles = new Vector3 (0, rotationAboutY, 0);
							}
							// Update each GridSquare based on gridSquares of ship
							foreach (GridSquare shipSquare in ship.gridSquares) {
								if (shipSquare.row == square.row && shipSquare.column == square.column) {
									square.occupied = true;
									square.hit = shipSquare.hit;
								}
							}
						}
						// Update each GridSquare based on saved missed shots
						foreach (GridSquare missedShot in Main.player2Misses) {
							if (missedShot.row == square.row && missedShot.column == square.column) {
								square.hit = true;
							}
						}
					}
				} else {
					square.inGame = false;
				}
			}
		}
	}
}
