using UnityEngine;
using System.Collections;

public class GridSquare {

	public int row;
	public int column;
	public bool hit = false;
	public bool occupied;

	public GridSquare() {
		row = 0;
		column = 0;
		occupied = false;
	}

	public GridSquare(int row, int column) {
		this.row = row;
		this.column = column;
	}

	public bool isPlacedLegally () {
		if (row < 1 || row > 10 || column < 1 || column > 10) return false;
		return true;
	}
}
