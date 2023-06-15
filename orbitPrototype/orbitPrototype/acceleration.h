#ifndef acceleration_h
#define acceleration_h

#define RADIUS 6378000
#define HEIGHT 35786000
#define ACC -9.8067
#define PI 3.141529

#include <cmath>
#include <iostream>
#include "position.h"

using namespace std;

class Acceleration
{
public:
	Acceleration(): ddx(0.0), ddy(0.0) {}
    //Acceleration(): ddx(-0.1122), ddy(-0.1943) {}
	

	Acceleration(double ddx, double ddy) {
		
		setDDx(ddx);
		setDDy(ddy);

	}
   
    void setDDx(double ddx) { this->ddx = ddx; }
    void setDDy(double ddy) { this->ddy = ddy; }
    
    double getDDx() const { return ddx; }
    double getDDy() const { return ddy; }
	
	double getAngle(const Position &pos);
	double getAngle(double x, double y);
	double getGravityHeight();
   
	void calculate(const Position &pos);

   
private:
   double ddx; // change in change in x
   double ddy; // change in change in y
   
};

#endif /* acceleration_h */
