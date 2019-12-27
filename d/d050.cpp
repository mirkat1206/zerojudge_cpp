// d050 : 妳那裡現在幾點了？
#include <cstdio>

int main()
{
	int h;
	while( scanf("%d", &h )!=EOF )
	{
		printf("%d\n", h - 15 + 24*(h<15) );
	}
	return 0;
}