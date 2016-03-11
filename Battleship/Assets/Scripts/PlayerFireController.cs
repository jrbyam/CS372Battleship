using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

public class PlayerFireController : MonoBehaviour {

	public bool shotFired = false;
	private GameObject passPanel;

	// Use this for initialization
	void Start () {
		if (SceneManager.GetActiveScene ().name == "Player1Fire") {
			GameObject.Find ("Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player1Name");
			GameObject.Find ("Pass It To Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player2Name");
		} else {
			GameObject.Find ("Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player2Name");
			GameObject.Find ("Pass It To Player Name").GetComponent<Text> ().text = PlayerPrefs.GetString ("Player1Name");
		}
		passPanel = GameObject.Find ("Pass It To Panel");
		passPanel.SetActive (false);
	}
	
	// Update is called once per frame
	void Update () {
		if (shotFired) {
			StartCoroutine (SwitchTurns ());
		}
	}

	// Switch turns or display GameOver if either player has sunk all of the other's ships
	private IEnumerator SwitchTurns () {
		yield return new WaitForSeconds (2);
		if (SceneManager.GetActiveScene ().name == "Player1Fire") {
			bool gameOver = true;
			foreach (ShipController ship in Main.player2Ships) {
				ship.updateSunk ();
				if (!ship.sunk) {
					gameOver = false;
					break;
				}
			}
			if (!gameOver) {
				passPanel.SetActive (true);
				yield return new WaitForSeconds (2);
				SceneManager.LoadScene ("Player2Fire");
			} else {
				Main.winner = PlayerPrefs.GetString ("Player1Name");
				SceneManager.LoadScene ("GameOver");
			}
		} else {
			bool gameOver = true;
			foreach (ShipController ship in Main.player1Ships) {
				ship.updateSunk ();
				if (!ship.sunk) {
					gameOver = false;
					break;
				}
			}
			if (!gameOver) {
				passPanel.SetActive (true);
				yield return new WaitForSeconds (2);
				SceneManager.LoadScene ("Player1Fire");
			} else {
				Main.winner = PlayerPrefs.GetString ("Player2Name");
				SceneManager.LoadScene ("GameOver");
			}
		}
	}
}
