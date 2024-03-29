/*****************************************************************************
*  ------------------------------- arclen.c -------------------------------  *
*****************************************************************************/

#include <math.h>

#include "geometry.h"

/*****************************************************************************
*  -------------------------------- arclen --------------------------------  *
*****************************************************************************/

void arclen(SPoint p1, SPoint p2, double *length)
{

	Point p1_rct, p2_rct;

	double alpha, dot;

/*****************************************************************************
*  Convert the spherical coordinates to rectilinear coordinates.             *
*****************************************************************************/

	p1_rct.x = p1.rho * sin(p1.phi) * cos(p1.theta);
	p1_rct.y = p1.rho * sin(p1.phi) * sin(p1.theta);
	p1_rct.z = p1.rho * cos(p1.phi);

	p2_rct.x = p2.rho * sin(p2.phi) * cos(p2.theta);
	p2_rct.y = p2.rho * sin(p2.phi) * sin(p2.theta);
	p2_rct.z = p2.rho * cos(p2.phi);

/*****************************************************************************
*  Get the angle between the line segments from the origin to each point.    *
*****************************************************************************/

	dot =
	    (p1_rct.x * p2_rct.x) + (p1_rct.y * p2_rct.y) +
	    (p1_rct.z * p2_rct.z);
	alpha = acos(dot / pow(p1.rho, 2.0));

/*****************************************************************************
*  Compute the length of the arc along the spherical surface.                *
*****************************************************************************/

	*length = alpha * p1.rho;

	return;

}
