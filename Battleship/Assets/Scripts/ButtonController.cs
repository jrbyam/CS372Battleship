using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonController : MonoBehaviour {

	public void nextScene (string nextScene) {
		SceneManager.LoadScene (nextScene);
	}

	public void savePlayer1Ships () {
		Main.player1Ships.Add (GameObject.Find ("Russian Carrier").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Battleship").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Cruiser").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Submarine").GetComponent<ShipController> ());
		Main.player1Ships.Add (GameObject.Find ("Russian Destroyer").GetComponent<ShipController> ());
	}

	public void savePlayer2Ships () {
		Main.player2Ships.Add (GameObject.Find ("American Carrier").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Battleship").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Cruiser").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Submarine").GetComponent<ShipController> ());
		Main.player2Ships.Add (GameObject.Find ("American Destroyer").GetComponent<ShipController> ());
	}

	public void setPlayer1Name () {
		PlayerPrefs.SetString ("Player1Name", GameObject.Find ("InputField").GetComponent<InputField> ().text);
	}

	public void setPlayer2Name () {
		PlayerPrefs.SetString ("Player2Name", GameObject.Find ("InputField").GetComponent<InputField> ().text);
	}
}
