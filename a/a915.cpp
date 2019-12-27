// a915 : 二维点排序
#include <cstdio>
#define N 1010

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
	{
		int xy[N][2];
		for( int i=0 ; i<n ; i++ )
			scanf("%d%d", &xy[i][0] , &xy[i][1] );

		for( int i=0 ; i<n ; i++ )
			for( int j=0 ; j<(n-i-1) ; j++ )
				if(  xy[j][0]>xy[j+1][0] )
				{
					int xbuf = xy[j][0], ybuf = xy[j][1] ;
					xy[j][0] = xy[j+1][0] ; 	xy[j][1] = xy[j+1][1] ;
					xy[j+1][0] = xbuf ; 		xy[j+1][1] = ybuf ;
				}

		for( int i=0 ; i<n ; i++ )
		{
			int x1 = i, x2 = i ;
			for( int j=(i+1) ; j<n ; j++ )
			{
				if( xy[j][0]==xy[i][0] )
					x2 = j ;
				else
					break;
			}
			for( int j=x1 ; j<=x2 ; j++ )
				for( int k=x1 ; k<=(x2-j+x1-1) ; k++ )
					if( xy[k][1]>xy[k+1][1] )
					{
						int buf = xy[k][1] ;
						xy[k][1] = xy[k+1][1] ;
						xy[k+1][1] = buf ;	
					}
			i = x2 ;
		}

		for( int i=0 ; i<n ; i++ )
			printf("%d %d\n", xy[i][0] , xy[i][1] );
	}
	return 0; 
}