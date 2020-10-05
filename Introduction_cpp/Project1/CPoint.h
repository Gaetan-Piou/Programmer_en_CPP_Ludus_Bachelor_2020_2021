#ifndef CPOINT_H
#define CPOINT_H
#pragma once

#include <string>
using namespace std;

class CPoint
//DEFINITION : Ceci est un point avec deux entiers repr�sentants sa position dans un plan 2D.
{
private:
	//Donn�es membres
	int m_nX;
	int m_nY;

public:
	std::string m_strType;

	//Constructeurs
	CPoint();
	CPoint(int nX, int nY, string m_strType);
	//fonctions membres
	void affichePoint() const;

	/*inline void init()
	{
		m_nX=0;
		m_nY=0;
	}*/

	//Accesseurs
	int getnX()const;
	int getnY()const;

	//Mutateurs
	void setnX(int n_val);
	void setnY(int n_val);

};

#endif