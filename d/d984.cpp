// d984 : 棄保效應
#include <cstdio>

int main()
{
	long long int a, b, c ;
	while( scanf("%lld%lld%lld", &a , &b , &c )!=EOF )
	{
		if( a>b && a>c )
		{
			if( a>b+c )
				printf("A\n");
			else if( b>c )
				printf("B\n");
			else
				printf("C\n");
		}
		else if( b>a && b>c )
		{
			if( b>a+c )
				printf("B\n");
			else if( a>c )
				printf("A\n");
			else
				printf("C\n");
		}
		else	// c>=a && c>=b
		{
			if( c>a+b )
				printf("C\n");
			else if( a>b )
				printf("A\n");
			else
				printf("B\n");
		}
	}
	return 0;
}