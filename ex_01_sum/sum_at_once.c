#include <stdlib.h>
#include <stdio.h>	

int main (int argc, char* argv[] )
{
	float f_result=0;
	// for interest calculation: 
	// float f_amount=0; 
	// ERROR HANDLING
	// How many arguments should the program have?
	if ( argc <= 2 )
	{
		printf("please give at least 2 positive integer numbers (NOT 0, NOT 1)");
		return EXIT_FAILURE;
	}
	else 
	{
		// calculate sum of numbers 
		for (int i=2; i<=argc; i++)
		{
			f_result = f_result + atof(argv[i - 1]);
		}
		printf("The result is: %f", f_result);
		printf("\n"); 
		//
		/* calculate interest */
		// f_amount = atof(argv[1]); 

		return EXIT_SUCCESS;
	}

}
