#include<stdio.h>

int main()
{
	char lines[5][20];
	int ctr, longctr = 0;
	
	int longest(char lines_arr[][20]);
	/* function declaration */
	
	
	
	for(ctr = 0; ctr < 5; ctr++)
	/* accepts string values into the array */
	{
      printf("\n enter string %d:",ctr +1);
      scanf("%s", lines[ctr]);
	}
	
	longctr = longest(lines);
	
	printf("\n the longest string is %s", lines[longctr]);
	
	getch();
}

int longest(char lines_arr[][20]) /* function definition */
{
	int i = 0, l_ctr = i,  prev_len,  new_len;
	prev_len = strlen(lines_arr[i]);
	/* determines the length of the next element */
	
	for(i++; i<5; i++)
	{
		new_len = strlen(lines_arr[i]);
		/* determines the length of the next element */
		
		if(new_len > prev_len)
		l_ctr = i;
		/* stores the subscript of the longer string */
		
		prev_len = new_len;
	}
	return l_ctr;
	/* returns the subscript of the longest string */
}
