// c431 : Sort ! Sort ! Sort !
#include <cstdio>
#include <cstring>
#define N 105
using namespace std;

int a[N];

int main()
{
	int n;
	while( scanf("%d", &n)!=EOF )
	{
		memset( a , 0 , sizeof(a) );

		int buf;
		for( int i=0 ; i<n ; i++ )
		{
			scanf("%d", &buf );
			a[buf]++ ;
		}

		for( int i=0 ; i<N ; i++ )
			while( a[i]-- )
				printf("%d ", i );
		printf("\n");
	}
	return 0;
}