#include<stdio.h>
int main()
{
	int a,b,c;
	a =b =c =0;
	printf("\nenter 1st integer:");
	scanf("%d", &a);
	printf("\enter 2nd integer:");
	scanf("%d", &b);
	c = adder(a,b);
	printf("\n\na & b in main() are: %d, %d", a, b);
	printf("\n\nc in main() is: %d",c);
	
}
adder(int a, int b)
{
	int c;
	c = a+b;
	a *=a;
	b +=5;
	printf("\n\na & b within adder function are: %d, %d",a, b);
	printf("\n with adder function is : %d", c);
	return(c);
}
