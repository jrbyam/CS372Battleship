using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class Ship : MonoBehaviour {

	public int size;
	public List<GridSquare> gridSquares;
	public bool sunk;

	// Use this for initialization
	void Start () {
	
	}

	public Ship( int shipSize )
	{
		size = shipSize;
		gridSquares = new List<GridSquare> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
