#include<stdio.h>

int main()
{
	int	num1;
	int	num2;

	scanf("%d %d", &num1, &num2);
	while(num2 > 10)
	{
		num2 /= 10;
	}

}
