#include <stdio.h>
#include "tPoint.h"

void affichePoint(tPoint pPoint)
//BUT : Afficher les coordonn�es d'un point dans la console.
//ENTREE : Le-dit point.
//SORTIE : Ses coordonn�es X et Y affich�es.
{
	printf("Mon point a pour coordonnees : X = %d Y = %d \n", pPoint.nX, pPoint.nY); //%u pour l'entier non sign�.
}
