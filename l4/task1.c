#include <math.h>

double f(const double *x, double *result)					
{
	*result = ((sqrt(2 * *x + 2 * sqrt(pow(*x, 2) - 4))) / (sqrt(pow(*x, 2) - 4) + *x + 2));
}