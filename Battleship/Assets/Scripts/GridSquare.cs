using UnityEngine;
using System.Collections;

public class GridSquare : MonoBehaviour {

	public int row;
	public int column;
	public bool hit = false;
	public bool occupied;
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
		if (Input.GetMouseButton (0)) {
			Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
			if (plane.Raycast (ray, out distance)) {
				if (GetComponent<BoxCollider> ().bounds.Contains (ray.GetPoint (distance))) { // Press is over this square
					GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.7f);
				} else {
					GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.16f); // Press is over a different square
				}
			}
		} else {
			GetComponent<Renderer> ().material.color = new Vector4 (1, 1, 1, 0.16f);
		}
	}

	public bool isPlacedLegally () {
		if (row < 1 || row > 10 || column < 1 || column > 10) return false;
		return true;
	}
}
