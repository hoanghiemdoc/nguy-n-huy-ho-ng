#include <stdio.h>
int main()
{
	int year;
	printf("\nplease enter a year:");
	scanf("%d", &year);
	if(year % 4==0 && year % 100 !=0 || year % 400 ==0)
	printf("\n%d is a leap year!", year);
	
	return 0;
}
