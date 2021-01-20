#include<stdio.h>
using namespace std;
int main()
{
	int a=10,b=20;
	printf("Addition: %d",add(a,b));
	printf("Substraction: %d",sub(a,b));
	return 0;
}

int add(int a, int b)
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}
