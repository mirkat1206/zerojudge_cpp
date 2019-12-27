// b898 : 高中組-第一題：畢氏定理
#include <cstdio>
#include <cstring>
#define N 100100

int main()
{
	int t;
	scanf("%d", &t );
	while( t-- )
	{
		char a[N], b[N], c[N];
		scanf("%s%s%s", a , b , c );
		int len[3] = { strlen(a) , strlen(b) , strlen(c) };

		if( len[0]==len[1] )
		{
			if( len[1]==len[2] )			// len[0]==len[1]==len[2]
			{
				for( int i=0 ; i<len[0] ; i++ )
				{
					if( a[i]>b[i] && a[i]>c[i] )
					{
						printf("%s\n", a );
						break;
					}
					else if( a[i]<b[i] && b[i]>c[i] )
					{
						printf("%s\n", b );
						break;
					}
					else if( a[i]<c[i] && b[i]<c[i] )
					{
						printf("%s\n", c );
						break;
					}
				}
			}
			else if( len[1]>len[2] )		// len[0]==len[1]>len[2]
			{
				for( int i=0 ; i<len[0] ; i++ )
				{
					if( a[i]>b[i] )
					{
						printf("%s\n", a );
						break;
					}
					else if( a[i]<b[i] )
					{
						printf("%s\n", b );
						break;
					}
				}
			}
			else							// len[0]==len[1]<len[2]
				printf("%s\n", c );
		}
		else if( len[0]<len[1] )
		{
			if( len[1]==len[2] )			// len[0]<len[1]==len[2]
			{
				for( int i=0 ; i<len[1] ; i++ )
				{
					if( b[i]>c[i] )
					{
						printf("%s\n", b );
						break;
					}
					else if( b[i]<c[i] )
					{
						printf("%s\n", c );
						break;
					}
				}
			}
			else if( len[1]>len[2] )		// len[1]>len[0],len[2]
				printf("%s\n", b );
			else							// len[0]<len[1]<len[2]
				printf("%s\n", c);
		}
		else	// len[0]>len[1]
		{
			if( len[1]==len[2] )			// len[0]>len[1]==len[2]
				printf("%s\n", a );
			else if( len[1]>len[2] )		// len[0]>len[1]>len[2]
				printf("%s\n", a );
			else							// len[0]>len[1], len[2]>len[1]					
			{
				if( len[0]==len[2] )		// len[0]==len[2]>len[1]
				{
					for( int i=0 ; i<len[0] ; i++ )
					{
						if( a[i]>c[i] )
						{
							printf("%s\n", a );
							break;
						}
						else if( a[i]<c[i] )
						{
							printf("%s\n", c );
							break;
						}
					}
				}
				else if( len[0]>len[2] )	// len[0]>len[1],len[2]
					printf("%s\n", a );
				else						// len[2]>len[0]>len[1]
					printf("%s\n", c );
			}
		}
	}
	return 0;
}