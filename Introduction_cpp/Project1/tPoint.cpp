#include <stdio.h>
#include "tPoint.h"


void tPoint::affichePoint(tPoint pPoint) const
//BUT : Afficher les coordonn�es d'un point dans la console.
//ENTREE : Le-dit point.
//SORTIE : Ses coordonn�es X et Y affich�es.
{
	printf("Mon point a pour coordonnees : X = %d Y = %d \n", pPoint.m_nX, pPoint.m_nY); //%u pour l'entier non sign�.
}