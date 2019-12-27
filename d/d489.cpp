// d489: 伏林的三角地
#include <cstdio>

int main()
{
	double a, b, c;
	while( scanf("%lf%lf%lf", &a , &b , &c )!=EOF )
	{
		double s = ( a + b + c )/2 ;
		// double area = sqrt( s*(s-a)*(s-b)*(s-c) );
		printf("%.0lf\n", s*(s-a)*(s-b)*(s-c) );

	}	
	return 0;
}