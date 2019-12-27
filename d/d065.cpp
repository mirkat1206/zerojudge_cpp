// d065 : 三人行必有我師
#include <cstdio>

int main()
{
	int input;
	while( scanf("%d", &input )!=EOF )
	{
		int max = input ;
		scanf("%d", &input );
		if( input>max )
			max = input ;
		scanf("%d", &input );
		if( input>max )
			max = input ;
		printf("%d\n", max );
	}
	return 0;
}