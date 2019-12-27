// a065 : 提款卡密碼
#include <cstdio>

int main()
{
	char input[10];
	while( scanf("%s", input )!=EOF )
	{
		for( int i=0 ; i<6 ; i++ )
		{
			int buf = input[i] - input[i+1] ;
			if( buf<0 )
				buf *= -1 ;
			printf("%d", buf );
		}
		printf("\n");
	}
	return 0;
}