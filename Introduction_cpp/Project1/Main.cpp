#include "CPoint.h"
#include <stdio.h>
using namespace std;

int main()
{
	/*
	printf("Hello World\n");

	tPoint pPoint;

	pPoint.m_nX = 4;
	pPoint.m_nY = 1;

	//cin >> pPoint.nX; //cin est l'�quivalent de scanf en C++, cependant il r�cup�re une valeur non typ�e.
	//cin >> pPoint.nY;


	pPoint.affichePoint(pPoint); //Note : Penser aux normes de programmations MVC.*/

	//Cr�ation
	CPoint pPoint(54,229);
	CPoint pPoint2;

	//Initialisation.
	/*pPoint.setnX(17);
	pPoint.setnY(34);*/

	//Appel de la m�thode publique affichePoint()
	//pPoint.affichePoint();

	printf("Mon point 1 a pour coordonnees : X = %d Y = %d \n", pPoint.getnX(), pPoint.getnY());
	printf("Mon point 2 a pour coordonnees : X = %d Y = %d \n", pPoint2.getnX(), pPoint2.getnY());


	return 0;
}