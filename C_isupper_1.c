#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 'G';
	printf("%d\n", isupper(a)); // 0이면 거짓, 0이 아닌 다른 숫자면 참!

	return 0;
}