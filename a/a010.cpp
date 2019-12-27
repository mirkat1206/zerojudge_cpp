// a010 : 因數分解
#include <cstdio>

int main()
{
	int input;
	while( scanf("%d", &input )!=EOF )
	{
		int flg = 1 ;
		for( int i=2 ; i<=input ; i++ )
		{
			int cnt = 0 ;
			while( input%i == 0 )
			{
				cnt++ ;
				input /= i ;
			}
			if( flg && cnt>=1 )
			{
				if( cnt>1 )
					printf("%d^%d", i , cnt );
				else if( cnt==1 )
					printf("%d", i );
				flg = 0 ;
			}
			else
			{
				if( cnt>1 )
					printf(" * %d^%d", i , cnt );
				else if( cnt==1 )
					printf(" * %d", i );
			}
		}
		printf("\n");
	}
	return 0;
}