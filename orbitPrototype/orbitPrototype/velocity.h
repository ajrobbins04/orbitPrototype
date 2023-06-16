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

class TestVelocity;

class Velocity
{
public:
	friend TestVelocity;
	
	// constructors
	Velocity(): dx(0.0), dy(0.0) {}
	Velocity(double dx, double dy) : dx(dx), dy(dy) {}
	Velocity(const Velocity &rhs) : dx(rhs.dx), dy(rhs.dy) {}
	Velocity & operator = (const Velocity &rhs)
	{
		dx = rhs.dx;
		dy = rhs.dy;
		return *this;
	}
	
	// setters
    void setDx(double dx) { this->dx = dx; }
    void setDy(double dy) { this->dy = dy; }
	void setDxDy(double dx, double dy) {
		this->dx = dx;
		this->dy = dy;
	}
	
	void setDirection(const Direction &direction)
	{
		setSpeedDirection(getSpeed(), direction);
	}
	
	void setSpeed(double speed)
	{
		setSpeedDirection(speed, getDirection());
	}
	
	void setSpeedDirection(double speed, const Direction &direction);
	
	// getters
    double getDx()    const { return dx; }
    double getDy()    const { return dy; }
	double getSpeed() const;
	
	Direction getDirection() const;
	Velocity getVelocity()   const
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
	
	void updateVelocity(const Acceleration &acc);
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

