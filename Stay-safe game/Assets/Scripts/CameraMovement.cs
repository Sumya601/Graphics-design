using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraMovement : MonoBehaviour
{
    // Start is called before the first frame update
    public float cameraSpeed; // how fast cammera will be moving

    // Update is called once per frame
    void Update()
    {
       transform.position += new Vector3(cameraSpeed * Time.deltaTime, 0, 0); // x cordinate camera velocity
    }
}
