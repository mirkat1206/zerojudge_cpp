// d586 : 哈密瓜美語
#include <cstdio>
#define N 10100

char toENG[27] = "jvkixcpomtfgdyhesrlzbqnwua" ;
char toSUM[27] = "uzrmatifxopnhwvbslekycqjgd" ;

int main()
{
	int n;
	scanf("%d", &n );
	while( n-- )
	{
		int m;
		scanf("%d", &m );
		
		char buf;
		scanf("%c%c", &buf , &buf );
		if( buf<='z' && buf>='a' )
		{
			int sum = 0 ;
			for( int i=0 ; i<m ; i++ )
			{
				if( !i )
					scanf("%c%c", &buf , &buf );
				for( int j=0 ; j<26 ; j++)
					if( buf==toSUM[j] )
					{
						sum += j+1 ;
						break;
					}
			}
			printf("%d\n", sum );
		}	
		else
		{

		}
	}
	return 0;
}