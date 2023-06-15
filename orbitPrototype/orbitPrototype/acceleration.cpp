#include "acceleration.h"

double Acceleration::getAngle(const Position &pos)
{
	double x = pos.getMetersX();
	double y = pos.getMetersY();
 
	
	double angle = atan2(x, y);
	
	return angle;
	
}

double Acceleration::getGravityHeight()
{
	double sum = RADIUS + HEIGHT;
	double base = RADIUS / sum;
	double gHeight = ACC * pow(base, 2);

	return gHeight;
}




void Acceleration::calculate(const Position &pos)
{
	double gHeight = getGravityHeight();
	double angle = getAngle(pos);
	
	double newDDx = gHeight * sin(angle);
	double newDDy = gHeight * cos(angle);
	
	setDDx(newDDx);
	setDDy(newDDy);
}
