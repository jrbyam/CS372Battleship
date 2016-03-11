using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonController : MonoBehaviour {

	// Load the next scene with the given name
	public void nextScene (string nextScene) {
		SceneManager.LoadScene (nextScene);
	}

	// Save player 1's ships for use in the remainder fo the game
	public void savePlayer1Ships () {
		Main.player1Ships.Add (GameObject.Find ("Russian Carrier").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Battleship").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Cruiser").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Submarine").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Destroyer").GetComponent<ShipController> ());
	}

	// Save player 2's ships for use in the remainder of the game
	public void savePlayer2Ships () {
		Main.player2Ships.Add (GameObject.Find ("American Carrier").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Battleship").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Cruiser").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Submarine").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Destroyer").GetComponent<ShipController> ());
	}

	// Set player 1's name for the remainder of the game
	public void setPlayer1Name () {
		PlayerPrefs.SetString ("Player1Name", GameObject.Find ("InputField").GetComponent<InputField> ().text);
	}

	// Set player 2's name for the remainder of the game
	public void setPlayer2Name () {
		PlayerPrefs.SetString ("Player2Name", GameObject.Find ("InputField").GetComponent<InputField> ().text);
	}
}
