#include<stdio.h>
int main()
{
	int a,b,c;
	

   
   printf("\n canh cua tam giac la");
	printf("nhap a");
	scanf("%d",&a);
	printf("\n nhap b");
	scanf("%d",&b);
	printf("nhap c");
	scanf("%d",&c);
	
	getarea(a,b,c);
}

void getarea(int a, int b, int c)
{
	float p,s;
	p =(a+b+c)/2;

	
	if ( a+b>c && a+c>b && b+c>a)
	 
	{
		s = sqrt((a + b + c) * (a+b-c)*(a+c-b)*(b+c-a))/4;
		printf("dien tich tam giac la:%f",s);
	}
	else
	
	
	printf("ba canh khong phai la canh cua tam giac");
}
	
	
	
	
	


