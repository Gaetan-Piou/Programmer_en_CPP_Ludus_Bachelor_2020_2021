#include "CPoint.h"
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

	CPoint pPoint;

	//Appel de la m�thode publique affichePoint()
	pPoint.affichePoint();

	return 0;
}