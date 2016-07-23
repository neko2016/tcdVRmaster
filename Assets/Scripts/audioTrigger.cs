using UnityEngine;
using System.Collections;

public class audioTrigger : MonoBehaviour {

	// detects when the camera has collided with the audio GameObject and triggers the audio to play or stop.
	// attach to sphere with box collider (which is a trigger).
	// ensure main camera of GvrMain has a box collider also attached.

	public AudioSource myAudio;
	public int approxSecondsToFade;

	void Start () {
		myAudio = gameObject.GetComponent<AudioSource> (); // retrieves an AudioSource from a GameObject
	}
		
		
	void OnTriggerEnter (Collider col) { // when the collider is triggered...
		myAudio.Play(); 			 // the audio plays
	}

	void OnTriggerExit (Collider col) { // when the collider is exited...
		StartCoroutine(audioFadeOut.FadeOut(myAudio, 3f));
		//myAudio.Stop();				// the audio stops playing
	}


}
