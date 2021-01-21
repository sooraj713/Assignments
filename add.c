#include<stdio.h>
using namespace std;
int main()
{
	int a=10,b=20;
<<<<<<< HEAD
<<<<<<< HEAD

	if(a<0) //change negative no to positive number
	a=-a;
	if(b<0)
	b=-b;
=======
>>>>>>> parent of ece72ff... convert negative no to positive
	printf("Addition: %d",add(a,b));

=======
	printf("Addition: %d",add(a,b));
>>>>>>> parent of 977fd54... GIT-001 & GIT 002 updated
	printf("Substraction: %d",sub(a,b));
	return 0;
}

<<<<<<< HEAD
float add(int a, int b)
=======
int add(int a, int b)
>>>>>>> parent of 977fd54... GIT-001 & GIT 002 updated
{
	return (a+b);
}

int sub(int a, int b)
{
	return (a-b);
}
