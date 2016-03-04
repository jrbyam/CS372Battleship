using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonController : MonoBehaviour {

	public void nextScene (string nextScene) {
		SceneManager.LoadScene (nextScene);
	}

	public void setPlayer1Name () {
		PlayerPrefs.SetString ("Player1Name", GameObject.Find ("InputField").GetComponent<InputField> ().text);
	}

	public void setPlayer2Name () {
		PlayerPrefs.SetString ("Player2Name", GameObject.Find ("InputField").GetComponent<InputField> ().text);
	}
}
