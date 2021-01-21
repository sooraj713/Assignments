#include<stdio.h>
int main()
{
	int a=10,b=20;
	printf("Addition: %d",addition(a,b));
	printf("Substraction: %d",sub(a,b));
	return 0;
}

float addition(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}
