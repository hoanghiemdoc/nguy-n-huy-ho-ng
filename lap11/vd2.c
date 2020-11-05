#include <stdio.h>
int main()
{
	incre();
	incre();
	incre();
}
incre()
{
	char var = 65; /* var is automatic variable*/
	printf("\nthe character stored is var is %c", var++);
}
