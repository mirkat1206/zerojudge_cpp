// a054 : 電話客服中心
#include <cstdio>

//				A   B   C   D   E   F   G   H   I   J   K   L   M
int en[26] = { 	1 , 0 , 9 , 8 , 7 , 6 , 5 , 4 , 9 , 3 , 2 , 2 , 1 , 
				0 , 8 , 9 , 8 , 7 , 6 , 5 , 4 , 3 , 1 , 3 , 2 , 0 };
//              N   O   P   Q   R   S   T   U   V   W   X   Y   Z

int main()
{
	char input[10];
	while( scanf("%s", input )!=EOF )
	{
		int sum = 0 ;
		for( int i=0 ; i<9 ; i++ )
			sum += ( input[i] - '0' )*( 8 - i );
		sum += ( input[8] - '0' );

		for( int i=0 ; i<26 ; i++ )
			if( (en[i]+sum)%10 == 0 )
				printf("%c", i + 'A' );
		printf("\n");
	}
	return 0;
}