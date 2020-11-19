#include <stdio.h>
#include <stdlib.h>

int num = 0;
unsigned long long int fib[47];
unsigned long long int Fibonacci(unsigned int n);
int main(void)
{
	printf("請輸入項數：\n");
	scanf_s("%d", &num);
	printf("fibonacci(%d): %d\n", num, Fibonacci(num));
	printf("目前已知最大的費氏數為：%d\n", fib[46]);
	system("pause");
	return 0;
}

unsigned long long int Fibonacci(unsigned int n)
{
	fib[0] = 0;
	fib[1] = 1;
	for (int i = 2; i <= 46; i++)
	{
		fib[i] = fib[i - 2] + fib[i - 1];
	}
	return fib[n - 1];
}