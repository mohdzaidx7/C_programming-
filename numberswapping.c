#include <stdio.h>
int main()
{
   int x, y;
   
    printf("Enter first number: ");
	scanf("%d", &x);
	printf("Enter second number: ");
	scanf("%d", &y);  
	
	printf ("Before swapping: \n");
    printf ("First variable: %d\n", x);
    printf ("Second variable: %d\n", y);
    
    x = x + y;
    y = x - y;
    x = x - y;

	printf ("After swapping: \n");
    printf ("First variable: %d\n", x);
    printf ("Second variable: %d\n", y);    
    

	return 0;
	
}
