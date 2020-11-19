#include <stdio.h>
#include <stdlib.h>

int int1 = 0;
int int2 = 0;
int lcm(int A, int B);
int main(void)
{
	printf("請輸入兩個整數，並使用空格分隔：\n");
	scanf_s("%d%d", &int1, &int2);
	printf("LCM(A, B): %d\n", lcm(int1, int2));
	system("pause");
	return 0;
}

int lcm(int A, int B)
{
	int mul = 0;
	int i = 1;
	if (A < B)
	{
		for (;;)
		{
			mul = A * i;
			if (mul % B == 0)
			{
				break;
			}
			i++;
		}
	}
	else
	{
		for (;;)
		{
			mul = B * i;
			if (mul % A == 0)
			{
				break;
			}
			i++;
		}
	}
	return mul;
}