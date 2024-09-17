#include <stdio.h>
int main()
{
	int num1, num2, num3;
	int temp1, temp2;
	printf("Enter 3 integers: ");
	scanf("%d %d %d", &num1, &num2, &num3);
	temp1 = num1;
	temp2 = num2;
	num1 = num3;
	num2 = temp1;
	num3 = temp2;
	printf("Swapped numbers are: num1=%d, num2=%d and num3=%d", num1, num2, num3);
}