#include <stdio.h>
#include <iostream>
#include "tPoint.h"
using namespace std;

int main()
{
	printf("Hello World\n");

	tPoint pPoint;

	pPoint.nX = 4;
	pPoint.nY = 1;

	/*cin >> pPoint.nX; //cin est l'�quivalent de scanf en C++, cependant il r�cup�re une valeur non typ�e.
	cin >> pPoint.nY;*/


	affichePoint(pPoint); //Note : Penser aux normes de programmations MVC.

	return 0;
}