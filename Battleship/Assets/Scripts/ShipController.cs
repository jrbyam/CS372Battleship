using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ShipController : MonoBehaviour {

	public int size;
	public List<GridSquare> gridSquares;
	public bool sunk;
	public string name;

	// Constructors
	public ShipController () {
		size = 0;
		gridSquares = new List<GridSquare> ();
		name = "";
	}
	public ShipController (int shipSize, string shipName) {
		size = shipSize;
		gridSquares = new List<GridSquare> ();
		name = shipName;
	}

	// Update is called once per frame
	void Update () {
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
		if (size == 2 && name == "Destroyer") return true;
		if (size == 3 && (name == "Cruiser" || name == "Submarine")) return true;
		if (size == 4 && name == "Battleship") return true;
		if (size == 5 && name == "Carrier") return true;
		return false;
	}
}
