// b294 : 經濟大恐荒
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int ans = 0, num ;
		for( int i=1 ; i<=n ; i++ )
		{
			scanf("%d", &num );
			ans += num*i ;
		}
		printf("%d\n", ans );
	}
	return 0;
}