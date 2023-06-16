#include "velocity.h"

/*********************************************
 * GET SPEED
 * Computes the velocity speed.
 *********************************************/
double Velocity::getSpeed() const
{
	return sqrt(dx * dx + dy * dy);
}
/*********************************************
 * UPDATE
 * Updates the velocity based on its current velocity,
 * acceleration, and time.
 *********************************************/
void Velocity::update(const Acceleration &aGravity)
{
	double currDx = getDx();
	double currDy = getDy();
	
	double newDx = currDx + aGravity.getDDx() * TIME;
	double newDy = currDy + aGravity.getDDy() * TIME;
	
	setDx(newDx);
	setDy(newDy);
}
