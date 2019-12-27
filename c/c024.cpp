// c024 : 10079 - Pizza Cutting
#include <cstdio>

int main()
{
	long long int n;
	while( scanf("%lld", &n )!=EOF )
	{
		if( n<0 )
			break;
		printf("%lld\n", 1 + (1+n)*n/2 );
	}
	return 0;
}