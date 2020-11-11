#include <stdio.h>
int indexMin(int so[])
{
	int min = so[0],n;
	for (n=0; n<8; n++)

		if (so[n]<min)
		min = so[n];
		return min;
}
int main()
{
	int so[8],n;
	for (n = 0; n<8 ; n++)
	{
		printf ("nhap so %d : ", n+1);
		scanf("%d",&so[n]);
	}
	for (n=1; n<8; n++)
	{
		if(indexMin(so)==so[n])
		{
			printf("%d va o vi tri thu %d",indexMin(so),n+1);
			break;
		}
	}
}

