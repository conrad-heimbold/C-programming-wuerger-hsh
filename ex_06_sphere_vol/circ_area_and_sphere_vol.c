#include <stdlib.h>
#include <stdio.h>	
#include <libgen.h>
#include <math.h> // for exponential: pow(basis,exponent)
int main (int argc, char* argv[] )
{
	int i_radius_start=0;
	int i_radius_end=0; 
	int i_radius=0; 
	const int i_args=2; 
	if ( argc <= i_args )
	{
		printf("please give at least 1 positive integer number (NOT 0)");
		return EXIT_FAILURE;
	}
	if (atoi(argv[1]) < 0 || atoi(argv[1]) > 100)
	{
		printf("number too high or too low");
		return EXIT_FAILURE;
	}
	else 
	{
		
		i_radius_start=atoi(argv[1]);
		i_radius_end=atoi(argv[2]);
		i_radius=i_radius_start; 

		while (i_radius < i_radius_end)
		{
			float f_area = M_PI * pow(i_radius,2) ; 
			float f_volume = 4/3 * M_PI * pow(i_radius,3); 
			printf("%8d %.2f %.2f \n", i_radius, f_area, f_volume);
			i_radius++; 
		}
		return EXIT_SUCCESS; 
	}

}
