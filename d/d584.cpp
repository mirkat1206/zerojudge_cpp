// d584 : 技能點數skill
#include <cstdio>

int main()
{
	int a, lv;
	while( scanf("%d%d", &a , &lv )!=EOF )
	{
		if( a==0 )
			printf("0\n");
		else if( a==2 )
			printf("%d\n", (lv>=8) + (lv>=30) + (lv>=70) + 3*(lv>=120) + 3*(lv-8) );
		else
			printf("%d\n", (lv>=10) + (lv>=30) + (lv>=70) + 3*(lv>=120) + 3*(lv-10) );
	}
	return 0;
}