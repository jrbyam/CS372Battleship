﻿using UnityEngine;
using System.Collections;

public class Main : MonoBehaviour {

	public static bool shipIsMoving = false;
	public static ShipController movingShip;

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
