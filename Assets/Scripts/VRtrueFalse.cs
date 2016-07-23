using UnityEngine;
using System.Collections;

public class VRtrueFalse : MonoBehaviour {

	[HideInInspector]
	public static bool VRstate;

	void Start () {
		VRstate = true;
	}
		
	public void makeVRtrue() {
		VRstate = true;
	}

	public void makeVRfalse() {
		VRstate = false;
	}
}
