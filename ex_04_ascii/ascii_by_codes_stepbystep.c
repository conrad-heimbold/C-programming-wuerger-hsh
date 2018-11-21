#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i_ascii_start = 50;
	int i_ascii_end = 0; 

	printf("Please input starting position of ascii table:");

	scanf("%d", &i_ascii_start); 

	printf("Please input end position of ascii table:");

	scanf("%d", &i_ascii_end);

	printf("%c", i_ascii_start);

	return EXIT_SUCCESS;
}
