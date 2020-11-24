// a248: 新手訓練 ~ 陣列應用
#include <cstdio>

int main()
{
	int a, b, n;
	while( scanf("%d%d%d", &a , &b , &n )==3 )
	{
		printf("%d.", a/b );
		for( int i=0 ; i<n ; i++ )
		{
			a = a%b *10 ;
			printf("%d", a/b );
		}
		printf("\n");
	}
	return 0;
}