#include <stdio.h>
#include <stdlib.h>

int main()
{
	float f_number1 = 0;
	float f_number2 = 0; 
	float f_number3 = 0;
	float f_result = 0;

	printf("Please input number 1: "); 

	scanf("%f", &f_number1);

	printf("Please input number 2: ");

	scanf("%f", &f_number2);

	printf("Please input number 3: ");

	scanf("%f", &f_number3);

	f_result = ( f_number1 + f_number2 + f_number3) / 3;
		
	printf("\n");
	printf("Result is: %f \n", f_result);
	return EXIT_SUCCESS;
}
