#include <stdio.h>
int main()
{
	char name [50];
	int age, i;
	printf("ten cua ban la");
	gets(name);
	printf("tuoi cua ban la");
	scanf("%d", &age);
	
	for (i = 0; i<age; i++)
	{
		printf("chao hoang dzai %s time %d\n", name, i+2);
	}
}
