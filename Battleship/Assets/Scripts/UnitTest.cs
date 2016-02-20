using UnityEngine;
using UnityEngine.Assertions;
using System.Collections;
using System.Collections.Generic;
using NSubstitute;

public class UnitTest : MonoBehaviour {

	// Use this for initialization
	void Start () {
		Ship ship = Substitute.For<Ship>(5);

		for( int i = 0; i < ship.size; i++ )
		{
			GridSquare square = new GridSquare (1, i);
			square.hit = true;
			ship.gridSquares.Add (square);
		}
		Assert.IsTrue (ship.sunk);
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
