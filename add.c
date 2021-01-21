#include<stdio.h>
int main()
{
	int a=10,b=20;

	if(a<0) //change negative no to positive number
	a=-a;
	if(b<0)
	b=-b;
	printf("Addition: %d",add(a,b));

	printf("Substraction: %d",sub(a,b));
	return 0;
}

float add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	if(a-b < 0)
	 
	return -(a-b);
}
