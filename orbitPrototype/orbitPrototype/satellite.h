#ifndef satellite_h
#define satellite_h
 
#define TIME 48

#include <cmath>
#include <iostream>
#include "position.h"
#include "velocity.h"
#include "acceleration.h"

class Satellite
{
public:
	Satellite() : pos(0.0, 0.0), v(0.0, 0.0), acc(0.0, 0.0) {}
   
	Satellite(Position pos, Velocity v, Acceleration acc) {
	   this->pos = pos;
	   this->v = v;
	   this->acc = acc;
	}
   
	void setPosition(float x, float y)
	{
	    pos.setMetersX(x);
	    pos.setMetersY(y);
	}
   
	void setVelocity(float dx, float dy)
	{
	    v.setDx(dx);
	    v.setDy(dy);
	}
   
	void setAcceleration(float ddx, float ddy)
	{
	    acc.setDDx(ddx);
	    acc.setDDy(ddy);
	}
   
	void update();
	
   
private:
	Position pos;
	Velocity v;
	Acceleration acc;
   
};

#endif /* satellite_h */

