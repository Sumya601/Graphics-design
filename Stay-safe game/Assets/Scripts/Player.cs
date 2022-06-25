using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float playerSpeed; //how fast the player will move
    private Rigidbody2D rb;  //  to use very simple physics to move the player
    private Vector2 playerDirection; // use to process our players input

    // Start is called before the first frame update
    void Start()
    {
        rb = GetComponent<Rigidbody2D>(); // fetch the regidbody2d from player game object
    }

    // Update is called once per frame
    void Update() // called once per frame..
    {
       float directionY = Input.GetAxisRaw("Vertical"); //keybord up and down key
       playerDirection = new Vector2(0, directionY).normalized; //x will be 0 cause player dosnt move
    }
    void FixedUpdate() //called once per physics frame for rigid change
    {
        rb.velocity = new Vector2(0, playerDirection.y * playerSpeed); // y will be cordinate velocity
    }
}
