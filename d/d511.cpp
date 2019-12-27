// d511 : 小明的作業
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int input[3];
	while( scanf("%d%d%d", &input[0] , &input[1] , &input[2] )!=EOF )
	{
		int cnt = 0, n = 4 ;
		sort( input , input+3 );
		if( input[0]+input[1]>input[2] )
			cnt++ ;
		while( n-- )
		{
			scanf("%d%d%d", &input[0] , &input[1] , &input[2] );
			sort( input , input+3 );
			if( input[0]+input[1]>input[2] )
				cnt++ ;
		}
		printf("%d\n", cnt );	
	}
	return 0;
}