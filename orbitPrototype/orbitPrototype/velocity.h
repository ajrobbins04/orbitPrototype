#ifndef velocity_h
#define velocity_h
#define TIME 48

#include "acceleration.h"

class Velocity
{
public:
    Velocity(): dx(-2685), dy(1550) {}
	
    Velocity(double dx, double dy) {
	   this->dx = dx;
	   this->dy = dy;
    }
   
    void setDx(double dx) { this->dx = dx; }
    void setDy(double dy) { this->dy = dy; }
   
    double getDx() const { return dx; }
    double getDy() const { return dy; }
   
	void reCalculate(Acceleration *acc);
	
private:
    double dx;
    double dy;
	
};

#endif /* velocity_h */

