#include<stdio.h>
#include<string.h>
int main()
{
	char firstname[15];
	char lastname[15];
	
	
	
	printf("enter your first name:");
	scanf("%s", lastname);
	
	printf("enter your last name:");
	scanf("%s",firstname);
	
	strcat(firstname, lastname);
	/* attaches the contents of lastname at the end of firstname */
	
	printf("%s",firstname);
	printf("%s",lastname);
	getch();
}
