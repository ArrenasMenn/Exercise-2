#include <stdio.h>
int main ()
{
	double a, b, c, d, x1, x2, x;
	printf ( "BBEDITE TRI CELbIX 4ISLA \n" );
	scanf ( "%f", &a );
	scanf ( "%f", &b );
	scanf ( "%f", &c );
        d = sqr(b) - 4*a*c;
	if ( d > 0)
    {
     x1 = (-b - sqrt(d))/(2 * a);
     x2 = (-b + sqrt(d))/(2 * a);
     printf ("d > 0, x1 = %f, x2 = %f", x1, x2); 
    }
    else if (d = 0)
    {
     x = -b/2*a;
     printf ("d = 0, X = %f ", x);  
    }
    else
        printf ("d < 0, KORNEI NET");
	return 0;
}

