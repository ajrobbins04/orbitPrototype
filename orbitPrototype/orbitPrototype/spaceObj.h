
#ifndef spaceObj_h
#define spaceObj_h

#include <cmath>
#include <iostream>
#include <string>
#include "position.h"
#include "direction.h"

class SpaceObj
{
public:
	SpaceObj(): name("spaceObj"), pos(0.0, 0.0), radius(0.0) {}
	
private:
	string name;
	Position pos;
	double radius;
	Direction dir;

};

#endif /* spaceObj_h */
