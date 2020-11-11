#include<stdio.h>
main()
{
	int num[10], i;
	
	printf ("Enter 10 intergers \n");
	for (i=0 ; i<10; i++)
	{
		printf ("a[%d] : ", i+1);
		scanf("%d",&num[i]);
	}
	
	printf ("Display in the reversed order\n");
	for (i= 9; i>=0; i--)
	{
		printf ("[%d]%d\n",i+1 ,num[i]);
		
	}
	
}
