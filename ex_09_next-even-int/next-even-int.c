#include <stdlib.h>
#include <stdio.h>

void eingeben(int*);
void korrigieren(int*);
void ausgeben(int*);

void main()
{
	int i_number = 0; 
	eingeben(&i_number); 
	korrigieren(&i_number); 
	ausgeben(&i_number); 
	return;
}

void eingeben(int* iptr_number)
{
	*iptr_number = 0; 
	printf("Please give number "); 
	scanf("%d", iptr_number); 
	if (*iptr_number == 0) exit(EXIT_FAILURE); 
	//if (*iptr_number < 0) exit(EXIT_FAILURE); 
	printf("\n"); 
	return; 
}

void korrigieren(int* iptr_number)
{
	if (((*iptr_number % 2) == 1) || ((*iptr_number % 2) == -1))
	{
		(*iptr_number) = (*iptr_number) + 1; 
	}
	return; 
}

void ausgeben(int* iptr_number)
{
	printf("Das Ergebnis lautet: %d", *iptr_number); 
	printf("... gespeichert unter der Adresse: %p", iptr_number); 
	printf("\n"); 
	return; 
}
