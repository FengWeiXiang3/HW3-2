#include <stdio.h>
#include <stdlib.h>

double base = 0;
int exponent = 0;
double power(double A, int B);
int main(void)
{
	printf("請輸入基數和指數，並使用空格分隔：\n");
	scanf_s("%lf%d", &base, &exponent);
	printf("%.2f^%d=%.2f\n", base, exponent, power(base, exponent));
	system("pause");
	return 0;
}

double power(double A, int B)
{
	double ans = 0;
	if (B > 1)
	{
		ans = A * power(A, B - 1);
	}
	else
	{
		return A;
	}
	return ans;
}