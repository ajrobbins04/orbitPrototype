#include "velocity.h"

void Velocity::reCalculate(const Acceleration &aGravity)
{
	double currDx = getDx();
	double currDy = getDy();
	
	double newDx = currDx + aGravity.getDDx() * TIME;
	double newDy = currDy + aGravity.getDDy() * TIME;
	
	setDx(newDx);
	setDy(newDy);
}
