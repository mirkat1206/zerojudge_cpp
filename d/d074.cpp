// d074 : 電腦教室
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int max = 0, buf ;
		while( n-- )
		{
			scanf("%d", &buf );
			if( buf>max )
				max = buf ;
		}
		printf("%d\n", max );
	}
	return 0;
}