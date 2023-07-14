using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Animation : MonoBehaviour
{

    private float minAngle = -45f;
    private float maxAngle = 45f;
    private float minForce = 10f;
    private float maxForce = 30f;

    public GameObject darts;
    public Transform target;

    private Vector3 startPosition;
    private float flightTime = 2f;
    private float delayBetweenThrows = 3f;
    private int numThrows = 3;

    private void Start()
    {
        startPosition = transform.position;
        StartCoroutine(ThrowDarts());
    }


    private IEnumerator ThrowDarts()
    {
        for (int i = 0; i < numThrows; i++)
        {
            float randomAngle = Random.Range(minAngle, maxAngle);
            float randomForce = Random.Range(minForce, maxForce);
            float angleInRadians = Mathf.Deg2Rad * randomAngle;
            float velocityX = randomForce * Mathf.Cos(angleInRadians);
            float velocityY = randomForce * Mathf.Sin(angleInRadians);
            Vector3 velocity = new Vector3(velocityX, velocityY, 0f);

            Vector3 targetPosition = target.position + GetRandomOffset();

            ThrowDart(velocity, startPosition, targetPosition, flightTime);
            yield return new WaitForSeconds(delayBetweenThrows);
        }
    }

    private Vector3 GetRandomOffset()
    {
        float offsetX = Random.Range(-0.1f, 0.1f);
        float offsetY = Random.Range(-0.1f, 0.1f);

        return new Vector3(offsetX, offsetY, 0f);
    }

    private void ThrowDart(Vector3 velocity, Vector3 start, Vector3 end, float duration)
    {
        GameObject dart = Instantiate(darts, start, Quaternion.identity);
        StartCoroutine(SimulateFlightPath(dart, velocity, start, end, duration));
    }
    private IEnumerator SimulateFlightPath(GameObject dart, Vector3 velocity, Vector3 start, Vector3 end, float duration)
    {
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            float progress = elapsedTime / duration;
            camera.transform.position = Vector3.Lerp(start, end, -progress);
            elapsedTime += Time.deltaTime;
            yield return null;
        }
        dart.transform.position = end;
    }
}
