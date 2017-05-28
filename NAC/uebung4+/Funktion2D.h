#pragma once

#include "Vektor2D.h"

#define ABSTAND_H 0.001f

 class Funktion2D
 {
 public:
	 float operator()(const Vektor2D &v) const;
 };

 // Ermittelt den Gradienten einer Funktion an einer Stelle mittels
 // numerischer Differentiation
 // 
 // @param f Die Funktion
 // @param v Die Stelle, an der der Gradient berechnet werden soll
 // @return Gradient der Funktion f an Stelle v
 Vektor2D const& gradient2D(const Funktion2D &f, const Vektor2D &v);

 // Ermittelt die Stelle eines Minimums mittels des Gradientenabstiegsverfahrens
 // 
 // @param f Die Funktion
 // @param start Die Startstelle
 // @param step Die Schrittweite
 // @param maxIterations Die maximale Anzahl Iterationen
 // @param tol Toleranzwert, der mit der Länge des Gradienten verglichen wird
 // @param ftol Toleranzwert
 // @return Die Stelle eines Minimums
 Vektor2D const& minimieren2D(const Funktion2D &f, const Vektor2D &start, float step, int maxIterations, float tol = 0.5f, float ftol = 0.5f);