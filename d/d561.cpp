// d561 : 被秒殺的四捨五入
#include <cstdio>
#include <cstring>
#define N 110

int main()
{
	char c;
	while( scanf("%c", &c )!=EOF )
	{
		bool neg = 0 ;
		int d = 0 ;
		
		if( c=='-' )
			neg = 1 ;
		else 
			d += c-'0' ;

		scanf("%c", &c );
		while( c!='.' )
		{
			d *= 10 ;
			d += c-'0' ;
			scanf("%c", &c );
		}

		char f[N];

		scanf("%s", f );
		for( int i=strlen(f) ; i<N ; i++ )
			f[i] = '0' ;

		int a = f[0]-'0' , b = f[1]-'0' , c = f[2]-'0' ;
		if( c>=5 )
		{
			b += 1 ;
			a += b/10 ;		b %= 10 ;
			d += a/10 ;		a %= 10 ;
		}

		if( d==0 && a==0 && b==0 )
			printf("0.00\n");
		else if( neg )
			printf("-%d.%d%d\n", d , a , b );
		else
			printf("%d.%d%d\n", d , a , b );

		scanf("%c", &c );
	}
	return 0;
}