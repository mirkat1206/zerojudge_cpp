// d980: 11479 - Is this the easiest problem?
#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	scanf("%d", &t );
	for( int kase=1 ; kase<=t ; kase++ )
	{
		long long int input[3];
		scanf("%lld%lld%lld", &input[0] , &input[1] , &input[2] );
		sort( input , input+3 );

		printf("Case %d: ", kase );
		if( input[0]+input[1] <= input[2] )
			printf("Invalid\n");
		else if( input[0]==input[1] && input[1]==input[2] )
			printf("Equilateral\n");
		else if( input[0]!=input[1] && input[1]!=input[2] && input[0]!=input[1] )
			printf("Scalene\n");
		else
			printf("Isosceles\n");
	}
	return 0;
}
