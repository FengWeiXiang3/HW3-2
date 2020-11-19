#include <stdio.h>
#include <stdlib.h>

char alphabet = 'A';
int main(void)
{
	printf("½Ð¿é¤J¦r¥À¡G\n");
	scanf_s("%c", &alphabet);
	if (alphabet >= 65 && alphabet <= 90)
	{
		printf("%c", alphabet + 32);
	}
	else if (alphabet >= 97 && alphabet <= 122)
	{
		printf("%c", alphabet - 32);
	}
	printf("\n");
	system("pause");
	return 0;
}