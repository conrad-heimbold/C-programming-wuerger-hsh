#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i_number = 5;

	printf("Please input a number:"); 

	scanf("%d", &i_number); 

	printf("\n\nYou typed in the number %d \n", i_number); 

	return EXIT_SUCCESS;
}
