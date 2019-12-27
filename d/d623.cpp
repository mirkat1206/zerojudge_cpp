// d623 : 反方陣
#include <cstdio>

int main()
{
	double a, b, c, d;
	while( scanf("%lf%lf%lf%lf", &a , &b , &c , &d )==4 )
	{
		if( a==0 && b==0 && c==0 && d==0 )
			break;
		if( a*d==b*c )
		{
			printf("cheat!\n");
			continue;
		}
		printf("%.5lf %.5lf\n%.5lf %.5lf\n", d/(a*d-b*c) , -b/(a*d-b*c) , -c/(a*d-b*c) , a/(a*d-b*c) );
	}
	return 0;
}