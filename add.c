#include<stdio.h>
using namespace std;
int main()
{
	int a=10,b=20;



	if(a<0) //change negative no to positive number
	a=-a;
	if(b<0)
	b=-b;

	printf("Addition: %d",add(a,b));

	printf("Substraction: %d",sub(a,b));
	printf("devidation": "%d",devide(a,b));
	return 0;
}


int add(int a, int b)

	return (a+b);
}

int devide(int a, int b)
{
	return (a*b);
}

int sub(int a, int b)
{
	return (a-b);
}
