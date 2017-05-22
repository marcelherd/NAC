#pragma once

#include "Vektor2D.h"

 class Funktion2D
 {
 public:
	 float operator()(const Vektor2D &v) const;
 };

 // Ermittelt den Gradienten einer Funktion an einer Stelle
 // 
 // @param f Die Funktion
 // @param v Die Stelle, an der der Gradient berechnet werden soll
 // @return Gradient der Funktion f an Stelle v
 float gradient2D(const Funktion2D &f, const Vektor2D &v)
 {
	 // TODO
	 return 0.0f;
 }

 // Ermittelt die Stelle eines Minimums mittels Gradientenabstiegsverfahren
 // 
 // @param f Die Funktion
 // @param start Die Startstelle
 // @param step Die Schrittweite
 // @param maxIterations Die maximale Anzahl Iterationen
 // @param tol Toleranzwert, der mit der Länge des Gradienten verglichen wird
 // @param ftol Toleranzwert
 // @return Die Stelle eines Minimums
 Vektor2D const& minimieren2D(const Funktion2D &f, const Vektor2D &start, float step, int maxIterations, float tol = 0.0f, float ftol = 0.0f)
 {
	 Vektor2D *retval = new Vektor2D;

	 // TODO

	 return *retval;
 }