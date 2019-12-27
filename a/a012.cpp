// a012 : 10055 - Hashmat the Brave Warrior
#include <cstdio>

int main()
{
	long long int a, b;
	while( scanf("%lld%lld", &a , &b )!=EOF )
		printf("%lld\n", (a-b)*(a>b) + (b-a)*(a<b) );
	return 0;
}