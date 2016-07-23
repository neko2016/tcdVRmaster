using UnityEngine;
using System.Collections;

public class filmControl : MonoBehaviour {

	private MediaPlayerCtrl mediaScript;
	private MeshRenderer myMesh;
	private bool meshOn;
	// private AudioSource myAudio;

	// Use this for initialization
	void Start () {
		mediaScript = gameObject.GetComponent<MediaPlayerCtrl> ();
		myMesh = gameObject.GetComponent<MeshRenderer> ();
		// myAudio = gameObject.GetComponent<AudioSource> ();

		myMesh.enabled = false; // screen disabled by default
		meshOn = false;
	}

	void Update () {

		//if (mediaScript.m_CurrentState == MediaPlayerCtrl.MEDIAPLAYER_STATE.END) {
			
		//}
	}

	public void displayScreen () { // enables/disables the screen

		if (meshOn == false) {
			myMesh.enabled = true;
			meshOn = true;
		} else if (meshOn == true) {
			myMesh.enabled = false;
			meshOn = false;
		}
			
	}

	public void videoPlay(){
		
	}

	public void film01() {
		mediaScript.Load ("film01.mp4");
	}

	public void film02() {
		mediaScript.Load ("film01s.mp4");	
	}
}
