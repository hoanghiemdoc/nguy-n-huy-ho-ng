#include<stdio.h>
float dientich(float a, float b)
{
	float s;
	s = a*b;
	return s;
	
}

float chuvi(float a, float b)
{
	float p;
	p = 2 * (a + b);
	return p;
}
int main()
{
	float a,b;
	int luachon;
	float dt,cv;
	printf("\n1.dien tich");
	printf("\n2. chu vi");
	dt = dientich(a, b);
	cv = chuvi(a, b);
	printf("nhap a la:");
	scanf("%d", &a);
	printf("nhap b la:");
	scanf("%d", &b);
	printf("\n luachon cua ban la");
	scanf("%d", &luachon);
	
	switch(luachon)
	{
		case 1:
			dt = dientich(a,b);
			printf("\ndien tich:%f",dt);
			break;
			
		case 2:
			cv = chuvi(a,b);
			printf("\nchu vi:%f",cv);
			break;
	}
	return 0;
	
	
	
}
