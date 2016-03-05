using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ShipController : MonoBehaviour {

	public int size;
	public List<GridSquare> gridSquares;
	public bool sunk;
	public string shipName;
	private bool followFinger = false;
	private Plane plane = new Plane(Vector3.up, -1);
	private float distance;

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

	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButton (0)) {
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			if (plane.Raycast (ray, out distance)) {
				if (!followFinger && !Main.shipIsMoving && GetComponent<BoxCollider> ().bounds.Contains (ray.GetPoint (distance))) {
					followFinger = true;
					Main.shipIsMoving = true;
				}
			}
		}
		if (Input.GetMouseButtonUp (0)) {
			followFinger = false;
			Main.shipIsMoving = false;
		}

		if (followFinger) {
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			if (plane.Raycast (ray, out distance)) {
				if (shipName == "Submarine") {
					transform.position = new Vector3 (ray.GetPoint (distance).x, 5, ray.GetPoint (distance).z);
				} else {
					transform.position = ray.GetPoint (distance);
				}
			}
		}
		updateSunk ();
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

	public void placeShip (GridSquare firstSquare, bool vertical) {
		gridSquares.Add (firstSquare);
		for (int i = 1; i < size; ++i) {
			GridSquare square;
			if (vertical) {
				square = new GridSquare (firstSquare.row + i, firstSquare.column);
			} else {
				square = new GridSquare (firstSquare.row, firstSquare.column + i);
			}
			gridSquares.Add (square);
		}
	}

	public bool isPlacedLegally () {
		foreach (GridSquare square in gridSquares) {
			if (square.row < 1 || square.row > 10 || square.column < 1 || square.column > 10) {
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
