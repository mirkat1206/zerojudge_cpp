// d060 : 還要等多久啊？
#include <cstdio>

int main()
{
	int m;
	while( scanf("%d", &m )!=EOF )
	{
		printf("%d\n", 25 - m + 60*(m>25) );
	}
	return 0;
}