// e948: 1. 基礎代謝率 (BMR Calculation)
#include <cstdio>

int main()
{
	int n, G, A, H, W;
	scanf("%d", &n );
	for( int i=0 ; i<n ; i++ )
	{
		scanf("%d%d%d%d", &G , &A , &H , &W );
		printf("%.2f\n", G*( 13.7*W + 5.0*H - 6.8*A + 66 ) + (1.0-G)*( 9.6*W + 1.8*H - 4.7*A + 655) );
	}
	return 0;
}