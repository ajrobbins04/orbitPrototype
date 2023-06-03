#include "satellite.h"

void Satellite::update()
{
	float x = pos.getMetersX();
	float dx = v.getDx();
	float ddx = acc.getDDx();
	float newX = x * dx * TIME + (ddx * pow(TIME, 2));
	pos.setMetersX(newX);
   
	float y = pos.getMetersY();
	float dy = v.getDy();
	float ddy = acc.getDDy();
	float newY = y * dy * TIME + (ddy * pow(TIME, 2));
	pos.setMetersY(newY);
}
