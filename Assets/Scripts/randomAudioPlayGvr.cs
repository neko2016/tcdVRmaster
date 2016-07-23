﻿using UnityEngine;
using System.Collections;

public class randomAudioPlayGvr : MonoBehaviour {

	// This class is used to play Google VR audio at a random interval. 
	// startTime is the range in seconds of the audio starting randomly.
	// repeatTime is the range in seconds of the audio repeating after it has started.

	public GvrAudioSource myAudio; 
	private float startTime;
	private float repeatTime;

	public float startTimeA;
	public float startTimeB;
	public float repeatTimeA;
	public float repeatTimeB;


	// Use this for initialization
	void Start () {
		myAudio = GetComponent<GvrAudioSource> ();
		startTime = Random.Range (startTimeA, startTimeB);
		repeatTime = Random.Range (repeatTimeA, repeatTimeB);
		myInvocation ();
	}

	void myInvocation(){
		InvokeRepeating ("playSound", startTime, repeatTime);
	}

	void playSound(){
		myAudio.Play();
	}
}
