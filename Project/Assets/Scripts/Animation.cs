using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class Animation : MonoBehaviour
{
    // Bereich der möglichen Wurfwinkel in Grad
    private float minAngle = -45f;
    private float maxAngle = 45f;

    // Bereich der möglichen Kräfte in Newton
    private float minForce = 10f;
    private float maxForce = 30f;

    // Dart-Objekt in der Szene
    public GameObject dartPrefab;

    // Zielposition der Dartscheibe
    public Transform target;

    // Startposition des Dartpfeils
    private Vector3 startPosition;

    // Flugzeit des Dartpfeils
    private float flightTime = 3f;

    // Zeit zwischen den Würfen
    private float delayBetweenThrows = 3f;

    // Anzahl der zu werfenden Pfeile
    private int numThrows = 3;

    private void Start()
    {
        // Dartpfeil-Startposition
        startPosition = transform.position;

        // Beispielaufruf: Pfeile werfen
        StartCoroutine(ThrowDarts());
    }

    private IEnumerator ThrowDarts()
    {
        for (int i = 0; i < numThrows; i++)
        {
            // Zufälligen Wurfwinkel und Kraft generieren
            float randomAngle = Random.Range(minAngle, maxAngle);
            float randomForce = Random.Range(minForce, maxForce);

            // Winkel in Radiant umwandeln
            float angleInRadians = Mathf.Deg2Rad * randomAngle;

            // Geschwindigkeitsvektor berechnen
            float velocityX = randomForce * Mathf.Cos(angleInRadians);
            float velocityY = randomForce * Mathf.Sin(angleInRadians);
            Vector3 velocity = new Vector3(velocityX, velocityY, 0f);

            // Flugbahn in Richtung der Dartscheibe mit Variation
            Vector3 targetPosition = target.position + GetRandomOffset();

            // Dartpfeil werfen und Flugbahn animieren
            ThrowDart(velocity, startPosition, targetPosition, flightTime);

            // Wartezeit zwischen den Würfen
            yield return new WaitForSeconds(delayBetweenThrows);
        }
    }

    private Vector3 GetRandomOffset()
    {
        // Generiere eine zufällige Variation der Flugbahn
        float offsetX = Random.Range(-0.1f, 0.1f);
        float offsetY = Random.Range(-0.1f, 0.1f);

        return new Vector3(offsetX, offsetY, 0f);
    }

    private void ThrowDart(Vector3 velocity, Vector3 start, Vector3 end, float duration)
    {
        GameObject dart = Instantiate(dartPrefab, start, Quaternion.identity);
        StartCoroutine(SimulateFlightPath(dart, velocity, start, end, duration));
    }

    private IEnumerator SimulateFlightPath(GameObject dart, Vector3 velocity, Vector3 start, Vector3 end, float duration)
    {
        float elapsedTime = 0f;

        while (elapsedTime < duration)
        {
            float progress = elapsedTime / duration;

            // Aktualisiere die Position des Dartpfeils entlang der Flugbahn
            dart.transform.position = Vector3.Lerp(start, end, progress);

            // Aktualisiere die Zeit seit Beginn der Animation
            elapsedTime += Time.deltaTime;

            yield return null;
        }

        // Dartpfeil ist auf der Zielposition angekommen
        dart.transform.position = end;

    }
}
