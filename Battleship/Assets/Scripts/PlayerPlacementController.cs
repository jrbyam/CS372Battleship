using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

public class PlayerPlacementController : MonoBehaviour {

	// Use this for initialization
	void Start () {
		if (SceneManager.GetActiveScene ().name == "Player1Placement") {
			GameObject.Find ("Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player1Name");
		} else {
			GameObject.Find ("Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player2Name");
		}
		StartCoroutine (RemoveMessagePanel ());
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	private IEnumerator RemoveMessagePanel () {
		yield return new WaitForSeconds (3);
		Destroy (GameObject.Find ("Place Your Ships Panel"));
		Destroy (GameObject.Find ("Place Your Ships"));
		Destroy (GameObject.Find ("Player Name"));
	}
}
