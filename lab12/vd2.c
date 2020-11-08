#include <stdio.h>
int main()
{
	char name[20];
	/* name is declared as a single dimensional character array*/

	printf("enter your name:"); /* displays a message*/
	scanf("%s",name);  /*accepts the input*/
	printf("hi there:%s",name);  /* displays the input */
	
	getch();
	
}
