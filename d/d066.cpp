// d066 : 上學去吧！
#include <cstdio>

int main()
{
	int h, m ;
	while( scanf("%d%d", &h , &m )!=EOF )
	{
		if( h<17 && h>7 )
			printf("At School\n");
		else if( h==7 && m>=30 )
			printf("At School\n");
		else
			printf("Off School\n");
	}
	return 0;
}
