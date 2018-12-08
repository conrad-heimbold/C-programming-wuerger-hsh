#include <stdlib.h>
#include <stdio.h>
#define LENGTH_OF_TEXT 50

int number_of_chars(); 
int vocals_only(); 
int cnstns_only(); 

void main()
{
	char txt[LENGTH_OF_TEXT]; 
	fgets(&txt[0], LENGTH_OF_TEXT + 2, stdin); 
	for (int i = 0; txt[i] != 0; i++)
	{
		if (txt[i] == "\n") txt[i] = 0; 
	}
	int i = 0; 
	for (i; txt[i] != 0; i++)
	{
		putchar(txt[i]); 
	}
	printf("\n"); 
	printf("%d", i); 
	printf("\n"); 
	// give chars in reverse order:
	for (i = strlen(txt) - 1; i >= 0; i--) 
	{
		putchar(txt[i]); 
	}
	printf("\n"); 
	// count number of big letters: 
	int i_number_of_big_letters = 0; 
	for (i = 0; i < strlen(txt); i++)
	{
		if((txt[i] >= 'A')  && (txt[i] <= 'Z')) i_number_of_big_letters++; 
	}
	printf("number of big letters: %d \n", i_number_of_big_letters); 
	// count number of vocals: 
	
}
