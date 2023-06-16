/***********************************************************************
 * Header File:
 *    Velocity
 * Author:
 *    Amber Robbins, Martin Nkala
 * Summary:
 *
 ************************************************************************/
#ifndef velocity_h
#define velocity_h
#define TIME 48

#include "acceleration.h"
#include "direction.h"

class Velocity
{
public:
	Velocity(): dx(0.0), dy(0.0) {}
	
	// non-default constructor
	Velocity(double dx, double dy) : dx(dx), dy(dy) {}
	
	// copy constructor
	Velocity(const Velocity &rhs) : dx(rhs.dx), dy(rhs.dy) {}
   
	// study up on assignment operators before removing /*  */
	/*Velocity & operator = (const Velocity &rhs)
	{
		dx = rhs.dx;
		dy = rhs.dy;
		return *this;
	}*/
	
    void setDx(double dx) { this->dx = dx; }
    void setDy(double dy) { this->dy = dy; }
   
    double getDx() const { return dx; }
    double getDy() const { return dy; }
	
	Velocity getVelocity() const
	{
		Velocity v(dx, dy);
		return v;
	}
	
   
	void addDx(double dx) { setDx(getDx() + dx); }
	void addDy(double dy) { setDy(getDy() + dy); }
	
	void addV(const Velocity &v)
	{
		dx += v.dx;
		dy += v.dy;
	}
	
	void reCalculate(const Acceleration &aGravity);
	void reverse()
	{
		dx *= -1.0;
		dy *= -1.0;
	}
	
	Velocity & operator += (const Velocity &rhs)
	{
		addV(rhs);
		return *this;
	}
	
private:
    double dx;
    double dy;
	
};

#endif /* velocity_h */

