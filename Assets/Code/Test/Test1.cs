using System;
using UnityEngine;
using System.Collections.Generic;

namespace RollaBall
{
    public sealed class Test1 : MonoBehaviour
    {
        private void Start()
        {
            
            Run();
        }

        public void Run()
        {
            var list = new List<Action>();
            DisplayClass display = new DisplayClass();

            for(display.i = 0; display.i < 3; display.i++)
            {
                list.Add(display.Action);
            }

            foreach(Action action in list)
            {
                action();
            }

        }

        private sealed class DisplayClass
        {
            public int i;

            public void Action()
            {
                Debug.Log(i);
            }
        }
    }
}
  
