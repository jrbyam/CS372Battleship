using UnityEngine;
using System.Collections;

public class GridGenerator : MonoBehaviour {

	public bool inGame;

	// Use this for initialization
	void Start () {
		assignGridSquares ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private void assignGridSquares () {
		for (int i = 1; i <= 10; ++i) {
			for (int j = 1; j <= 10; ++j) {
				GridSquare square = GameObject.Find (i + " " + j).AddComponent<GridSquare> ();
				square.row = i;
				square.column = j;
				// Position each square above the water
				square.gameObject.transform.position = new Vector3 (square.gameObject.transform.position.x, 1, square.gameObject.transform.position.z);
				// Differentiate between GridSquare's in game and GridSquare's for ship placement
				if (inGame)
					square.inGame = true;
				else
					square.inGame = false;
			}
		}
	}
}
