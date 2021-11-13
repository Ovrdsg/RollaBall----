using System;
using UnityEngine;

public sealed class ExampleRefLocal : MonoBehaviour
{
    private void Start()
    {
        int readonlyArgument = 44;
        InArgExaple(readonlyArgument);
        Debug.Log(readonlyArgument);
        
    }
    
   void InArgExaple(in int number)
    {
        
    }
}
