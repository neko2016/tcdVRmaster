using UnityEngine;
using System.Collections;

public class homeIcon : MonoBehaviour {

	// controls the behaviour of the foot menu with the home button

	private float camXRot;
	private float newYRot;
	private Vector3 lastRot;
	public AudioSource pop;
	// bool soundPlayed; // checks if the sound has been triggered or not
	private float speed = 0.0025f; // speed of the slerp between rotation values, smaller is slower and smoother

	// Use this for initialization
	void Start () {
		//AudioSource pop = GetComponent<AudioSource> (); // retrives the sound from the AudioSource
		// soundPlayed = false;
	}

	// Update is called once per frame
	void Update () {

		// Gets the Y rotation of the camera and slerps between its last position and current
		newYRot = GameObject.Find ("GvrMain").GetComponentInChildren<gvrHeadRot> ().camYRot;
		lastRot = transform.eulerAngles;
		transform.rotation = Quaternion.Slerp(Quaternion.Euler(lastRot), Quaternion.Euler(transform.localRotation.x, 180f + newYRot, transform.localRotation.z) , Time.time * speed);

		// Checks the X rotation of the camera and makes the home icon visible or not when looking down
		/*camXRot = GameObject.Find ("GvrMain").GetComponentInChildren<gvrHeadRot> ().camXRot;

		if (camXRot >= 50f && camXRot <= 85f) {
			GameObject.Find ("homepanel").GetComponentInChildren<Canvas> ().enabled = true;
			playPop ();
		} else {
			GameObject.Find ("homepanel").GetComponentInChildren<Canvas> ().enabled = false;
			soundPlayed = false;
		} */
	}

	// plays a pop sound - for when the home icon appears 
	/* public void playPop() {
		if (soundPlayed == false) {
			pop.Play ();
			soundPlayed = true;
		}
	} */
}
