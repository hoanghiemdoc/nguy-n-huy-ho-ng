#include <stdio.h>
int main ()
{
	int a, b,c;
	a = 10;
	printf("nhap bang cuu chuong ban muon la\n");
	printf("bang cuu chuong cua ban la:");
	scanf("%d", &a);
	
	
	for (b = 0; b<=a; b++)
	{
	 
	  for (c=0; c<b; c++)
	  {
	  	 printf("%d * %d = %d\n",a+1,c,(a+1)*c);
	  }
   }
	
	
	return 0;
}
