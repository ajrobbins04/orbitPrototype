#ifndef acceleration_h
#define acceleration_h

#define RADIUS 6378000
#define HEIGHT 35786000
#define ACC -9.8067
#define PI 3.141529

#include <cmath>
#include <iostream>
#include "position.h"

class Acceleration
{
public:
    Acceleration(): ddx(0.0), ddy(0.0) {}
    Acceleration(double ddx, double ddy) {
	   this->ddx = ddx;
	   this->ddy = ddy;
    }
   
    void setDDx(double ddx) { this->ddx = ddx; }
    void setDDy(double ddy) { this->ddy = ddy; }
    
    double getDDx() const { return ddx; }
    double getDDy() const { return ddy; }
	
	double getAngle(Position &pos);
	double getGravityHeight();
   
	void reCalculate(Position &pos);

   
private:
   double ddx;
   double ddy;
   
};

#endif /* acceleration_h */
