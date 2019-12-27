// a149 : 乘乘樂
#include <cstdio>

int main()
{
	int t;
	scanf("%d", &t );
	while( t-- )
	{
		int input;
		scanf("%d", &input );
		
		if( input==0 )
		{
			printf("0\n");
			continue;
		}
		
		int output = 1 ;
		while( input>0 )
		{
			output *= input%10 ;
			input /= 10 ;
		}
		printf("%d\n", output );
	}
	return 0;
}