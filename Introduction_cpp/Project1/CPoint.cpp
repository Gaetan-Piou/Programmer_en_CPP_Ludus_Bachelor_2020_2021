#include "CPoint.h"
#include <stdio.h>

void CPoint::affichePoint() const
//BUT : Afficher les coordonn�es d'un point dans la console.
//ENTREE : Le-dit point.
//SORTIE : Ses coordonn�es X et Y affich�es.
{
	printf("Mon point a pour coordonnees : X = %d Y = %d \n", m_nX, m_nY);
}