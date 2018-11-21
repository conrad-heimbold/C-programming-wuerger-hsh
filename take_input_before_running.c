#include <stdlib.h>
#include <stdio.h>	
#include <libgen.h>
int main (int argc, char* argv[] )
{
	float f_result=0;
	int i_result=0;
	// How many arguments should the program have?
	const int i_args=2; 
	if ( argc <= i_args )
	{
		printf("please give at least 1 positive integer number (NOT 0)");
		return EXIT_FAILURE;
	}
	else 
	{
		printf("program name: %s", basename(argv[0]));
		printf("\n");  
		printf("===================================="); 
		printf("\n");
		printf("arguments:");
		printf("\n");
		printf("   as char:  argv[1] = %s", argv[1]); 
		printf("\n");
		printf("   as int:   argv[1] = %d", atoi(argv[1]));
		printf("\n");
		printf("   as float: argv[1] = %f", atof(argv[1]));
		printf("\n");
		printf("   as char:  argv[2] = %s", argv[2]);
		printf("\n");
		printf("   as int:   argv[2] = %d", atoi(argv[2]));
		printf("\n");
		printf("   as float: argv[2] = %f", atof(argv[2]));
		printf("\n"); 
		return EXIT_SUCCESS; 
	}

}
