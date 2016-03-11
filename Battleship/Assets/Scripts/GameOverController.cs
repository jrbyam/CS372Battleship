using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

public class GameOverController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		// Place winners name on screen
		GameObject.Find ("Winner Name").GetComponent<Text> ().text = Main.winner;
		StartCoroutine (BackToMain ()); // If no touch
		// Reset static variables
		Main.player1Ships = new List<ShipController> ();
		Main.player2Ships = new List<ShipController> ();
		Main.player1Misses = new List<GridSquare> ();
		Main.player2Misses = new List<GridSquare> ();
	}

	void Update () {
		if (Input.touchCount > 0) {
			SceneManager.LoadScene ("Main"); // Back to main on touch
		}
	}

	// Timeout set to 10 seconds if no touch is inputted
	private IEnumerator BackToMain () {
		yield return new WaitForSeconds (10);
		SceneManager.LoadScene ("Main");
	}
}
