// a148 : You Cannot Pass?!
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int sum = 0, buf ;
		for (int i=0; i<n; ++i)
		{
			scanf("%d", &buf );
			sum += buf;
		}
		if( sum > 59*n )
			printf("no\n");
		else
			printf("yes\n");
	}
	return 0;
}