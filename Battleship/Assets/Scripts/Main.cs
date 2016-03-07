using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Main : MonoBehaviour {

	public static bool shipIsMoving = false;
	public static ShipController movingShip;
	public static List<ShipController> player1Ships = new List<ShipController> ();
	public static List<ShipController> player2Ships = new List<ShipController> ();

	// Use this for initialization
	void Start () {
		if (!PlayerPrefs.HasKey ("Player1Name")) {
			PlayerPrefs.SetString ("Player1Name", "Player 1");
		}
		if (!PlayerPrefs.HasKey ("Player2Name")) {
			PlayerPrefs.SetString ("Player2Name", "Player 2");
		}
	}
}
