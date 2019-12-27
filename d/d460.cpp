// d460 : 山六九之旅
#include <cstdio>

int main()
{
	int age;
	while( scanf("%d", &age )!=EOF )
	{
		if( age<6 )
			printf("0\n");
		else if( age<12 )
			printf("590\n");
		else if( age<18 )
			printf("790\n");
		else if( age< 60 )
			printf("890\n");
		else
			printf("399\n");
	}
	return 0;
}