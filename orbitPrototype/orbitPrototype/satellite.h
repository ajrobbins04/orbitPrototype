#ifndef satellite_h
#define satellite_h
 
#define TIME 48

#include <cmath>
#include <iostream>
#include "position.h"
#include "velocity.h"
#include "direction.h"

class Satellite
{
public:
	Satellite() : name("satellite"), pos(0.0, 0.0), radius(0.0),
	dir(0.0), velocity(0.0, 0.0), dead(false) {}
  
	void setPosition(double x, double y)
	{
	    pos.setMetersX(x);
	    pos.setMetersY(y);
	}

   
	void setVelocity(double dx, double dy)
	{
	    velocity.setDx(dx);
	    velocity.setDy(dy);
	}
	
	Position getPos() { return pos; }
	
	double getPosX()  const { return pos.getMetersX(); }
	double getPosY()  const { return pos.getMetersY(); }

	void update();
   
private:
	string name;
	Position pos;
	double radius;
	Direction dir;
	Velocity velocity;
	bool dead;
   
};

#endif /* satellite_h */

