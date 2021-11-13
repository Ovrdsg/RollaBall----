using System;
using UnityEngine;
using UnityEngine.UI;

namespace RollaBall
{

    public sealed class DisplayBonuses
    {
        public Text _bonuseLable;
        public DisplayBonuses(GameObject bonus)
        {
            _bonuseLable = bonus.GetComponentInChildren<Text>();
            _bonuseLable.text = String.Empty;
        }

        public void Display(int value)
        {
            _bonuseLable.text = $"Вы набрали {value} очков";
        
        }
    }


}

