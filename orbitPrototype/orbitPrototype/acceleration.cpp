#include "acceleration.h"

double Acceleration::getAngle(Position & pos)
{
	double x = pos.getMetersX();
	double y = pos.getMetersY();

	double angleRad = atan2(y, x);
	double angleDeg = angleRad * (180/PI);
	
	return angleDeg;
	
}

double Acceleration::getGravityHeight()
{
	double base = (RADIUS/(RADIUS + HEIGHT));
	double gHeight = ACC * pow(base, 2);
	
	return gHeight;
}


void Acceleration::reCalculate(Position &pos)
{
	double gHeight = getGravityHeight();
	double angle = getAngle(pos);
	
	double newDDx = gHeight * sin(angle);
	double newDDy = gHeight * cos(angle);
	
	setDDx(newDDx);
	setDDy(newDDy);
}
