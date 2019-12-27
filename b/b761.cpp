// b761 : 搶30
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		if( n%4==0 )
			printf("egg\n");
		else
			printf("fat\n");
	}
	return 0;
}