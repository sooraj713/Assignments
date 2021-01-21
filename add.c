#include<stdio.h>
int main()
{
	int a=10,b=20;
<<<<<<< HEAD

	printf("Addition: %d",addition(a,b));
=======
	printf("Addition: %d",add(a,b));
>>>>>>> parent of ece72ff... convert negative no to positive
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
