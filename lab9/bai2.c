#include<stdio.h>
int main(){

int intarr[5];
float floatarr[10];
int i;
for (i=0; i<5; i++)
{
	scanf("%d\n", &intarr[i] );
	floatarr[i]= intarr[i];
	
}
printf("%d\n", intarr[i]);
for (i=5; i<8; i++)
{
	floatarr[i]=0;
}

printf("%f", floatarr[i]);
for (i=1; i<9; i++)
printf("%f\n", floatarr[i]);

}
