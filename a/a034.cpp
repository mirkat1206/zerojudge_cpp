// a034 : 二進位制轉換
#include <cstdio>

int main()
{
	long long int input;
	while( scanf("%lld", &input)!=EOF )
	{
		long long int output = 0, cnt = 1 ;
		while( input>0 )
		{
			output += (input%2)*cnt ;
			cnt *= 10 ;
			input /= 2 ;
		}
		printf("%lld\n", output );
	}
	return 0;
}