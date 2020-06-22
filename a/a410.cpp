// a410 : 解方程
#include <cstdio>

int main()
{
	int a, b, c, d, e, f;
	scanf("%d%d%d%d%d%d", &a , &b , &c , &d , &e , &f );
	if( (a==0 && b==0 && c!=0) || (d==0 && e==0 && f!=0) )
		printf("No answer\n");
	else if( b*d==a*e )
	{
		if( b*f==c*e )
			printf("Too many\n");
		else
			printf("No answer\n");
	}
	else
	{
		printf("x=%.2lf\n", (double) ( c*e - b*f )/( a*e - b*d ) );
		printf("y=%.2lf\n", (double) ( c*d - a*f )/( b*d - a*e ) );
	}		
	return 0;
}
/*
0 0 0 0 0 1
No answer

1 1 1 100 100 100
Too many

6 1 27 1 -10 -87
x=3.00
y=9.00

0 0 0 0 0 0
Too many

0 0 0 1 2 3
Too many

0 1 1 123 1 10
x=0.07
y=1.00
*/
