using UnityEngine;
using System.Collections;

public class videoTrigger : MonoBehaviour {

	// detects when the camera has collided with the videoSphere and triggers the video to play for the duration and then move to a new sphere
	// attach to videoSphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	// access video player of Easy Movie Texture
	private MediaPlayerCtrl mediaScript;
	private Collider col;

	// variables to transform the camera position:
	public float moveXto;
	public float moveYto;
	public float moveZto;

	// vectors for the camera and the home panel
	private Vector3 newPos;

	void Start () {
		mediaScript = gameObject.GetComponent<MediaPlayerCtrl> ();
		newPos = new Vector3(moveXto, moveYto, moveZto);
		//print (newPos);
	}

	void Update () {
		if (mediaScript.GetCurrentState () == MediaPlayerCtrl.MEDIAPLAYER_STATE.END /*&& hasMoved == false*/ ) {
			MoveCamera ();
			//mediaScript.Stop();
		}
	}

	void OnTriggerEnter (Collider col) { // when the collider is triggered set the current vectors of the camera and home panel, and play the video
		mediaScript.Play();
	}

	void OnTriggerExit (Collider col) { // when the collider is exited stop the video and reset the trigger
		mediaScript.Stop();
	}

	// for moving the camera after the video has taken place
	public void MoveCamera() {

		// moves the camera by adding whatever the public values are to its current position
		GvrViewer.Instance.transform.position = newPos;

		//moves the homepanel to follow along with the camera
		GameObject.Find ("homepanel").transform.position = newPos;
	}
}
