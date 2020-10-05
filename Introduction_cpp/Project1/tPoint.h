#ifndef TPOINT_H
#define TPOINT_H
#pragma once

typedef struct tPoint //public par d�faut
//DEFINITION : Ceci est un point avec deux entiers repr�sentants sa position dans un plan 2D.
{
	int m_nX;
	int m_nY;

	//prototype
	void affichePoint(tPoint) const;
}tPoint;

#endif