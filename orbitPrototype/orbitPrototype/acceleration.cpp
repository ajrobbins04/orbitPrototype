#include "acceleration.h"

/*********************************************
 * UPDATE ACCELERATION
 * Updates the acceleration at the current direction.
 *********************************************/
void Acceleration::updateAcc(double acc, const Direction &direction)
{
	setDDx(acc * direction.getDx());
	setDDy(acc * direction.getDy());
}

/*********************************************
 * GET GRAVITY
 * Computes amount of acceleration at a given point
 *********************************************/
double Acceleration::getGravity(double altitude)
{
	// just a temporary variable to store one aspect of
	// the gravity computation
	double tmp = EARTH_RADIUS / (EARTH_RADIUS + altitude);
	double acc = EARTH_GRAVITY * pow(tmp, 2);

	return acc;
}
