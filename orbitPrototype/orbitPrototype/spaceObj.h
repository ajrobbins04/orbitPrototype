/***********************************************************************
 * Header File:
 *    SpaceObj
 * Author:
 *    Amber Robbins, Martin Nkala
 * Summary:
 *
 ************************************************************************/
#ifndef spaceObj_h
#define spaceObj_h

#include <cmath>
#include <iostream>
#include <string>
#include "position.h"
#include "direction.h"

using namespace std;

class SpaceObj
{
public:
	SpaceObj(): name("spaceObj"), pos(0.0, 0.0), radius(0.0), dir(0.0) {}
	
private:
	string name;
	Position pos;
	double radius;
	Direction dir;

};

#endif /* spaceObj_h */
