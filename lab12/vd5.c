#include<stdio.h>
#include<string.h>

int main()
{
	char hotelname1[15] = "sea view";
	char hotelname2[15]= "sea breeze";
	
	
	printf("the old name is %s\n",hotelname1);
	
	strcpy(hotelname1, hotelname2);
	
	printf("the new name is %s\n", hotelname1);
	
	getch();
}
