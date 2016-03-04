using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

public class SetupPlayerController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (SceneManager.GetActiveScene ().name == "SetupPlayer1") {
			GameObject.Find ("InputField").GetComponent<InputField> ().text = PlayerPrefs.GetString ("Player1Name");
		} else {
			GameObject.Find ("InputField").GetComponent<InputField> ().text = PlayerPrefs.GetString ("Player2Name");
		}
	}
}
