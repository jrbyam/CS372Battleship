using UnityEngine;
using System.Collections;

public class GridSquare : MonoBehaviour {

	public int row;
	public int column;
	public bool hit;
	public bool occupied;

	// Use this for initialization
	void Start () {
	
	}

	public GridSquare( int row, int column )
	{

		this.row = row;

		this.column = column;
		
	}
	// Update is called once per frame
	void Update () {
	
	}
}
