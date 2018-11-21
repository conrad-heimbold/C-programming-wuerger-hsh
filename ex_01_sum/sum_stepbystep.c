#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i_number1 = 0;
	int i_number2 = 0; 
	int i_result = 0;

	printf("Please input number 1: "); 

	scanf("%d", &i_number1);

	printf("Please input number 2: ");

	scanf("%d", &i_number2);

	i_result = i_number1 + i_number2;
		
	printf("\n");
	printf("Result is: %d \n", i_result);
	return EXIT_SUCCESS;
}
