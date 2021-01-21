#include<stdio.h>
int main()
{
	int a=10,b=20;
<<<<<<< HEAD

	if(a<0) //change negative no to positive number
	a=-a;
	if(b<0)
	b=-b;
=======
>>>>>>> parent of ece72ff... convert negative no to positive
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
	return (a-b);
}
