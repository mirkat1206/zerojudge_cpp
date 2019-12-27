// d498 : 我不說髒話
#include <cstdio>

char output[] = "I don't say swear words!\n";

int main()
{
	int n;
	while( scanf("%d", &n )!=EOF )
		while( n-- )
			printf("%s", output );
	return 0;
}