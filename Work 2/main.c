#include <stdio.h>
#include <math.h>
int main ()
{
	int a, b, c, d, x1, x2, x;
	printf ( "BBEDITE TRI CELbIX 4ISLA \n" );
	scanf ( "%i", &a );
	scanf ( "%i", &b );
	scanf ( "%i", &c );
    
    d = pow(b,2) - 4*a*c;
	if ( d > 0)
    {
     x1 = (-b - sqrt(d))/(2 * a);
     x2 = (-b + sqrt(d))/(2 * a);
     printf ("d > 0, x1 = %i, x2 = %i\n", x1, x2); 
    }
    else if (d = 0)
    {
     x = -b/2*a;
     printf ("d = 0, X = %i \n", x);  
    }
    else
        printf ("d < 0, KORNEI NET\n");
	return 0;
}