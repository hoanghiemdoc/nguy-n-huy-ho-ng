#include <stdio.h>

int main(void)
{
 int num1; /* first number to be read from user */
 int num2; /* second number to be read from user */
 
 printf("Enter two integers, and i will tell you\n");
 printf("The relationships they satisfy:");
 
 scanf("%d%d",&num1,num2); /* read two integers */
 
 if (num1==num2) {
    printf("%d is equal to %d\n",num1,num2);
}   /* end if */

if ( num1 != num2 ) {
    printf("%d is not equal to %d\n",num1,num2);
}   /* end if */

if (num1 < num2) {
}
    printf( "%d is less than %d\n",num1,num2);
}   /* end if */
      
