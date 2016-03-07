using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

public class PlayerFireController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (SceneManager.GetActiveScene ().name == "Player1Fire") {
			GameObject.Find ("Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player1Name");
		} else {
			GameObject.Find ("Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player2Name");
		}
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
