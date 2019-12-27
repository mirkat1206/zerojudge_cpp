// a013 : 羅馬數字
// I = 1, V = 5, X = 10, L = 50, C = 100, D = 500, M = 1000
#include <cstdio>
#include <cstring>

int RtoI(char x)
{
	if( x=='I' )
		return 1 ;
	if( x=='V' )
		return 5 ;
	if( x=='X' )
		return 10 ;
	if( x=='L' )
		return 50 ;
	if( x=='C' )
		return 100 ;
	if( x=='D' )
		return 500 ;
	if( x=='M' )
		return 1000 ;
}

int ItoR(int x)
{
	if( x>=1000 )
	{
		printf("M");
		return 1000 ;
	}
	if( x>=900 )
	{
		printf("CM");
		return 900 ;
	}
	if( x>=500 )
	{
		printf("D");
		return 500 ;
	}
	if( x>=400 )
	{
		printf("CD");
		return 400 ;
	}
	if( x>=100 )
	{
		printf("C");
		return 100 ;
	}
	if( x>=90 )
	{
		printf("XC");
		return 90 ;
	}
	if( x>=50 )
	{
		printf("L");
		return 50 ;
	}
	if( x>=40 )
	{
		printf("XL");
		return 40 ;
	}
	if( x>=10 )
	{
		printf("X");
		return 10 ;
	}
	if( x>=9 )
	{
		printf("IX");
		return 9 ;
	}
	if( x>=5 )
	{
		printf("V");
		return 5 ;
	}
	if( x>=4 )
	{
		printf("IV");
		return 4;
	}
	if( x>=1 )
	{
		printf("I");
		return 1 ;
	}
}

int main()
{
	char a[100], b[100];
	while( scanf("%s", a ) )
	{
		if( a[0]=='#' )
			break;
		
		int ia = 0, ib = 0 ;
		for( int i=0 ; i<strlen(a)-1 ; i++ )
		{
			if( RtoI( a[i] ) >= RtoI( a[i+1] ) )
				ia += RtoI( a[i] ) ;
			else
				ia -= RtoI( a[i] ) ;
		}
		ia += RtoI( a[strlen(a)-1] ) ;
		
		scanf("%s", b );
		for( int i=0 ; i<strlen(b)-1 ; i++ )
		{
			if( RtoI( b[i] ) >= RtoI( b[i+1] ) )
				ib += RtoI( b[i] ) ;
			else
				ib -= RtoI( b[i] ) ;
		}
		ib += RtoI( b[strlen(b)-1] ) ;
		
		// printf("a = %d\nb = %d\n", ia , ib );

		int dif = (ia-ib)*(ia>ib) + (ib-ia)*(ib>ia) ;
		// printf("a>b = %d\nb>a = %d\ndif = %d\n", ia>ib , ib>ia , dif );
		
		if( dif==0 )
			printf("ZERO\n");
		while( dif>0 )
		{
			int buf = ItoR( dif ) ;
			dif -= buf ;
		}
		printf("\n");
	}
	return 0;
}