// a273 : 小朋友下樓梯
#include <cstdio>

int main()
{
	int n, k;
	while( scanf("%d%d", &n , &k )!=EOF )
	{
		if( n==0 )
			printf("Ok!\n");
		else if( k==0 )
			printf("Impossib1e!\n");
		else if( n%k==0 )
			printf("Ok!\n");
		else
			printf("Impossib1e!\n");
	}
	return 0;
}