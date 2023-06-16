#ifndef acceleration_h
#define acceleration_h

#define EARTH_RADIUS 6378000
#define EARTH_HEIGHT 35786000
#define EARTH_GRAVITY -9.8067
#define PI 3.141529

#include <cmath>
#include <iostream>
#include "position.h"
#include "direction.h"

class TestAcceleration;

using namespace std;

class Acceleration
{
public:
	friend TestAcceleration;
	
	Acceleration(): ddx(0.0), ddy(0.0) {}
	Acceleration(double acc, const Direction &direction): ddx(0.0), ddy(0.0)
	{
		updateAcc(acc, direction);
	}
   
    void setDDx(double ddx) { this->ddx = ddx; }
    void setDDy(double ddy) { this->ddy = ddy; }
    
    double getDDx() const { return ddx; }
    double getDDy() const { return ddy; }
	
	double getGravity(double altitude);
	void updateAcc(double gravity, const Direction &direction);

   
private:
   double ddx; // change in change in x
   double ddy; // change in change in y
   
};

#endif /* acceleration_h */
