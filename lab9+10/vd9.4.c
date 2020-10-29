#include <stdio.h>
int main()
{

int b,c,d;
b = 9;

printf("nhap so can chay:");
scanf("%d", &b);
printf("\n");
for (c=0; c<b; c++)
{
	printf("\n");
	for(d=0; d<c; d++) /*vong lap for ben trong*/
	printf("1,2,3,");
	printf("1,2,3,4,5,6");
	printf("1,2,3,4,5,6,7,8");
} 

  return 0;
}

