using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ButtonController : MonoBehaviour {

	public void nextScene(string nextScene) {
		SceneManager.LoadScene (nextScene);
	}
}
