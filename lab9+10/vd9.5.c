#include <stdio.h>
int main()
{

int b,c,d;
b = 0;

printf("nhap so can chay:");
scanf("%d", &b);
printf("\n");
for (c=0; c<b; c++)
{
	printf("\n");
	for(d=0; d<c; d++) /*vong lap for ben trong*/
	printf("*");
} 

  return 0;
}
