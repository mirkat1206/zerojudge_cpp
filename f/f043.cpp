// f043: 1. 小豪的回家作業 (Homework)
#include <cstdio>
using namespace std;

int main()
{
	int a, b, c;
	while( scanf("%d%d", &c , &a )!=EOF )
	{
		if( a==c )
		{
			b = 3 ;
			a -= 3 ;
		}
		else
			b = c - a ;

		if( b<a )
		{
			a = b ;
			b = c - a ;
		}
		printf("%d+%d=%d\n", a , b , c );
	}
	return 0;
}