// c382 : 加減乘除
#include <cstdio>

int main()
{
	int a, b;
	char opr;
	while( scanf("%d %c %d", &a , &opr , &b )!=EOF )
	{
		if( opr=='+' )
			printf("%d\n", a+b );
		else if( opr=='-' )
			printf("%d\n", a-b );
		else if( opr=='*' )
			printf("%d\n", a*b );
		else
			printf("%d\n", a/b );
	}
	return 0;
}