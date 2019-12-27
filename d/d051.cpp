// d051 : 糟糕，我發燒了！
#include <cstdio>

int main()
{
	double f;
	while( scanf("%lf", &f )!=EOF )
	{
		double c = (f-32) * 5 / 9 ;
		printf("%.3lf\n", c );
	}
	return 0;
}