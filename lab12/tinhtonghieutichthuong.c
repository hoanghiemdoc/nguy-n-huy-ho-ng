#include<stdio.h>
float num1, num2;
float tong(float num1, float num2);
float hieu(float num1, float num2);
float tich(float num1, float num2);
float thuong(float num1, float num2);

 
    
float main()

{
  
   int num1 , num2;
   
    
	int menu;
	int sum,sub, multi, dev, thoat;
	
	printf("nhap num1");
    scanf("%d", &num1);
    printf("nhap num2");
    scanf("%d", &num2);
    printf("chon: \n1. sum, \n2. sub, \n3. multi, \n4. dev, \n5 thoat");
    scanf("%d", &menu);
    
    switch (menu)
    
{


    case 1:
    
    sum = num1+num2;
    printf("sum = %d",sum);
    return sum;
    break;
 
 

    case 2:
	
 	sub = num1-num2;
 	printf("sub = %d",sub);
 	return sub;
 	break;
 	
 
 

    case 3:
	
 	multi = num1*num2;
 	printf("multi = %d",multi);
    return multi;
    break;
 
 
 
    case 4:
	
 	dev = num1/num2;
 	printf("dev = %d", dev);
 	return dev;
 	break;
 
 
    case 5:
    
    printf("\nchon 5 de thoat chuong trinh");
	break;
}
}


	


float tong(float num1, float num2)
{
	float  tong;
	tong = num1 + num2;
	
}

float hieu (float num1, float num2)
{
	float  hieu;
	hieu = num1 - num2;
	
}

float tich(float num1,float num2)
{
	float tich;
	tich = num1 * num2;

}

float thuong (float num1, float num2)
{
	float thuong;
	thuong=num1/num2;
	if (num2==0)
	{
		printf ("\n khong hop le");
	}
	
	else 
	{
		printf ("thuong = %d", thuong);
		return thuong;
	}
		
}


	
 
 
 
 
