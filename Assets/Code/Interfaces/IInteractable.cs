using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace RollaBall
{
    public interface IInteractable : IAction, IInitialization
    {
        bool IsInteractable { get;}
    }
}
