// a059 : 完全平方和
#include <cstdio>
#include <cmath>

int main()
{
	int t, a, b;
	scanf("%d", &t );
	for( int k=1 ; k<=t ; k++ )
	{
		scanf("%d%d", &a , &b );
		int sum = 0 ;
		for( int i=a ; i<=b ; i++ )
			if( (int)sqrt(i)*(int)sqrt(i)==i )
				sum += i ;
		printf("Case %d: %d\n", k , sum );
	}
	return 0;
}