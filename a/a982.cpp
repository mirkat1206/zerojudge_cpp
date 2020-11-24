// a982: 迷宮問題#1
#include <cstdio>
#include <vector>
using std::vector;
#include <queue>
using std::queue;

const int MAXN = 110 ;
const int WALL = 0 ;
const int ROAD = 1 ;

int n;
vector< vector<int> > maze;
queue<int> q_x, q_y;

void input();
int bfs();

int main()
{
	while( scanf("%d", &n )==1 )
	{
		input();
	
		if( maze[1][1]==WALL || maze[n-2][n-2]==WALL )
		{
			printf("No solution!\n");
			continue;
		}

		int ans = bfs();
		if( maze[n-2][n-2]>ROAD )
			printf("%d\n", ans );
		else
			printf("No solution!\n");
/*
		for( int i=0 ; i<n ; i++ )
		{
			for( int j=0 ; j<n ; j++ )
				printf("%3d ", maze[i][j]);
			printf("\n");
		}
*/
	}
	return 0;
}

void input()
{
	char c;
	scanf("%c", &c );
	maze.resize( n );
	for( int i=0 ; i<n ; i++ )
	{
		maze[i].resize( n ) ;
		for( int j=0 ; j<n ; j++ )
		{
			scanf("%c", &c );
			if( c=='#' )
				maze[i][j] = WALL ;
			else
				maze[i][j] = ROAD ;
		}
		scanf("%c", &c );
	}
}

int bfs()
{
	q_x.push(1);	q_y.push(1);
	maze[1][1] = 2 ;

	int x, y;
	while( maze[n-2][n-2]==ROAD && !q_x.empty() )
	{
		x = q_x.front();
		y = q_y.front();
		// printf("( %d , %d )\n", x , y );
		// right
		if( maze[ y ][ x+1 ]==ROAD )
		{
			q_x.push( x+1 );
			q_y.push( y );
			maze[ y ][ x+1 ] = maze[ y ][ x ] + 1 ;
		}
		// down
		if( maze[ y+1 ][ x ]==ROAD )
		{
			q_x.push( x );
			q_y.push( y+1 );
			maze[ y+1 ][ x ] = maze[ y ][ x ] + 1 ;
		}
		// left
		if( maze[ y ][ x-1 ]==ROAD )
		{
			q_x.push( x-1 );
			q_y.push( y );
			maze[ y ][ x-1 ] = maze[ y ][ x ] + 1 ;
		}
		// up
		if( maze[ y-1 ][ x ]==ROAD )
		{
			q_x.push( x );
			q_y.push( y-1 );
			maze[ y-1 ][ x ] = maze[ y ][ x ] + 1 ;
		}
		q_x.pop();
		q_y.pop();
	}
	return maze[y][x] ;
}	