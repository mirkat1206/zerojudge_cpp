// d068 : 該減肥了！
#include <cstdio>

int main()
{
	int w;
	while( scanf("%d", &w )!=EOF )
		printf("%d\n", w - (w>50) );
	return 0;
}