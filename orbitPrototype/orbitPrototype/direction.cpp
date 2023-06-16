#include "direction.h"

double Direction::convertToRadians(double degrees)
{
	return (degrees / 360.0) * (2.0 * M_PI);
}

double Direction::convertToDegrees(double radians)
{
	return 360.0 * (radians / (2.0 * M_PI));
}
