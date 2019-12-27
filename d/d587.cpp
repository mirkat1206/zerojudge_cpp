// d587 : 參貳壹真好吃
#include <cstdio>

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int cnt[5] = {0}, buf ;
		while( n-- )
		{
			scanf("%d", &buf );
			cnt[buf]++ ;
		}
		for( int i=1 ; i<=3 ; i++ )
			while( cnt[i]-- )
				printf("%d ", i );
		printf("\n");
	}
	return 0;
}