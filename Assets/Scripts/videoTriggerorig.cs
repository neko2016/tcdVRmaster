using UnityEngine;
using System.Collections;

public class videoTriggerorig : MonoBehaviour {

	// detects when the camera has collided with the videoSphere and triggers the video to play for the duration and then move to a new sphere
	// attach to videoSphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	// access video player of Easy Movie Texture
	private MediaPlayerCtrl mediaScript; 

	// variables to transform the camera position:
	public float moveXby;
	public float moveYby;
	public float moveZby;

	// vectors for the camera and the home panel
	private Vector3 CamPos;
	private Vector3 HomePos;

	// checks if the trigger has taken place
	private bool hasMoved;

	void Start () {
		mediaScript = gameObject.GetComponent<MediaPlayerCtrl> ();
		hasMoved = false;
	}

	void Update () {
		if (mediaScript.GetCurrentState () == MediaPlayerCtrl.MEDIAPLAYER_STATE.END && hasMoved == false) {
			MoveCamera ();
			//mediaScript.Stop();
			hasMoved = true;
		}
	}

	void OnTriggerEnter (Collider col) { // when the collider is triggered set the current vectors of the camera and home panel, and play the video
		CamPos = GvrViewer.Instance.transform.position;
		HomePos = GameObject.Find ("homepanel").transform.position;
		mediaScript.Play();
	}

	void OnTriggerExit (Collider col) { // when the collider is exited stop the video and reset the trigger
		mediaScript.Stop();
		hasMoved = false;
	}

	// for moving the camera after the video has taken place
	public void MoveCamera() {

		// moves the camera by adding whatever the public values are to its current position
		CamPos.x += moveXby;
		CamPos.y += moveYby;
		CamPos.z += moveZby;
		GvrViewer.Instance.transform.position = CamPos;

		//moves the homepanel to follow along with the camera
		HomePos.x += moveXby;
		HomePos.y += moveYby;
		HomePos.z += moveZby;
		GameObject.Find ("homepanel").transform.position = HomePos;
	}
}
