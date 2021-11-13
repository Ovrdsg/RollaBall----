using UnityEngine;

[ExecuteInEditMode]
public class Test : MonoBehaviour
{

    [ContextMenuItem("Random Count", nameof(Random))]
    [SerializeField] private int _count;

    private void Random()
    {
        _count = UnityEngine.Random.Range(0, 100);
    }

    //private void Start()
    //{
    //    var tempRenderer = GetComponent<Renderer>();
    //    if(tempRenderer != null)
    //    {
    //        tempRenderer.material.color = Random.ColorHSV();
    //    }
    //}

    
}
