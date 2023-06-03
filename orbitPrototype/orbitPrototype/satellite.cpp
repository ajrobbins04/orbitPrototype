#include "satellite.h"

void Satellite::update()
{
	double x = pos.getMetersX();
	double dx = v.getDx();
	double ddx = acc.getDDx();
	double newX = x * dx * TIME + (ddx * pow(TIME, 2));
	pos.addMetersX(newX);
   
	double y = pos.getMetersY();
	double dy = v.getDy();
	double ddy = acc.getDDy();
	double newY = y * dy * TIME + (ddy * pow(TIME, 2));
	pos.setMetersY(newY);
}
