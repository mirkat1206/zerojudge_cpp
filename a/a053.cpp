// a053 : Sagit's 計分程式
#include <cstdio>

int main()
{
	int n;
	scanf("%d", &n );
	if( n>40 )
		printf("100\n");
	else if( n>20 )
		printf("%d\n", 60 + 20 + (n-20)*1 );
	else if( n>10 )
		printf("%d\n", 60 + (n-10)*2 );
	else
		printf("%d\n", n*6 );
	return 0;
}
