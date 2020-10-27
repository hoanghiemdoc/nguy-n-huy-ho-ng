#include <stdio.h>
int main()
{
	char ch;
	printf("\nEnter a lower cased alphabet (a - z)");
	scanf("%c", &ch);
	if (ch < 'a' || ch > 'z')
	printf("\ncharater not a lower cased alphabet");
	else
	switch (ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case '0':
		case 'u':
		printf("\ncharacter is a vowel");
		break;
		
		case 'z':
		printf("\nlast alphabet (z) was entered");
		break;
		
		default:
			printf("\ncharacter is a constant");
			break;
    
	}
	
	
	return 0;
}
