using UnityEngine.UI;
using UnityEngine;
using System;

namespace RollaBall
{


    public sealed class DisplayWonGame
    {
        
        private Text _wonGameLabel;
        
        public DisplayWonGame(GameObject wonGame)
        {
            _wonGameLabel = wonGame.GetComponentInChildren<Text>();
            _wonGameLabel.text = String.Empty;
        }

        public void WonGame()
        {            
         _wonGameLabel.text = $"Вы выиграли!";               
        }

     

    }


}
