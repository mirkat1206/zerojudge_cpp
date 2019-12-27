// a224 : 明明愛明明
#include <cstdio>
#include <cstring>
#define N 1010

int main()
{
	char input[N];
	while( scanf("%s", input )!=EOF )
	{
		int cnt[26] = {0} ;
		for( int i=0 ; i<strlen(input) ; i++ )
		{
			if( input[i]>='a' && input[i]<='z' )
				cnt[ input[i]-'a' ]++ ;
			else if( input[i]>='A' && input[i]<='Z' ) 
				cnt[ input[i]-'A' ]++ ;
		}
		for( int i=0 ; i<26 ; i++ )
		{
			if( cnt[i]%2==0 )
				cnt[i] = 0 ;
			else
				cnt[i] = 1 ;
		}

		int sum = 0 ;
		for( int i=0 ; i<26 ; i++ )
			sum += cnt[i] ;

		if( sum<=1 )
			printf("yes !\n");
		else
			printf("no...\n");
	}
	return 0;
}