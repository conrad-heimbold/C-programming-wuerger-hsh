#include <stdlib.h>
#include <stdio.h>	
#include <libgen.h>
#define M_PI 3.14159265358979323

float AngToRad(float angular_val)
{
	float tmp = (M_PI * angular_val) / 180; 
}

int fac_interactive(int i_num)
{
	int i_counter; 
	int i_result = 1; 
	for(i=1; i <= i_num; i++)
	{
		i_result = i_result * i;
	}
	return i_result;
}

int fac_recursive(int i_num)
{
	if(i_num == 0) return 1;
	else return i_num * fac_recursive(i_num - 1);

}

float pow(float f_basis, int i_exp)
{
	float f_tmp  = 1;
	for (i=0; i<i_exp; i++)
	{
		f_tmp =  f_basis * f_tmp;
	}
	return f_tmp;
}

int main (int argc, char* argv[] )
{
	float f_result=0;
	int i_result=0;
	// How many arguments should the program have?
	const int i_args=1; 
	if ( argc <= i_args )
	{
		printf("please give at least 1 positive integer number (NOT 0)");
		return EXIT_FAILURE;
	}
	else 
	{
		printf("   as char:  argv[1] = %s", argv[1]); 
		return EXIT_SUCCESS; 
	}

}



