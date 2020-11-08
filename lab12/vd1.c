#include<stdio.h>
void main()
{
	
	char name[20];
	/* name is declared as single dimenional character array*/
	
	
	puts("enter your name:"); /*accepts the input */
	
	gets(name); /*accepts the input */
	
	puts("hi there:");
	puts(name);  /* displays the input */
	getch();
}
