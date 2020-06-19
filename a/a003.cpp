// a003 : 兩光法師占卜術
#include <cstdio>

int main()
{
	int M, D;
	scanf("%d%d", &M , & D);
	int S = ( M*2 + D ) % 3 ;
	if( S==0 )
		printf("普通\n");
	else if( S==1 )
		printf("吉\n");
	else
		printf("大吉\n");

	return 0;
}
