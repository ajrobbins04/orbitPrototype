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
	Satellite() : pos(21082000, 36515000), v(-2685, 1550), acc(-0.1122, -0.1943) {}
   
	void set(Position &pos, Velocity &v, Acceleration &acc) {
	   this->pos = pos;
	   this->v = v;
	   this->acc = acc;
	}
   
	void setPosition(double x, double y)
	{
	    pos.setMetersX(x);
	    pos.setMetersY(y);
	}
	
	void setPosition(Position &pos)
	{
		this->pos = pos;
	}
   
	void setVelocity(double dx, double dy)
	{
	    v.setDx(dx);
	    v.setDy(dy);
	}
	void setVelocity(Velocity &v)
	{
		this->v = v;
	}
   
	void setAcceleration(double ddx, double ddy)
	{
	    acc.setDDx(ddx);
	    acc.setDDy(ddy);
	}
	void setAcceleration(Acceleration &acc)
	{
		this->acc = acc;
	}
   
	void update();
	
   
private:
	Position pos;
	Velocity v;
	Acceleration acc;
   
};

#endif /* satellite_h */

