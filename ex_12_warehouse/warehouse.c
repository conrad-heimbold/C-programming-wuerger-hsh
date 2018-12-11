#include <stdio.h>
#include <stdlib.h>
#define OBJ_IN_STORAGE 5

enum dev_types { tablet, smartphone, laptop }; 

typedef struct 
{
	unsigned int i_ser;
	char i_x; 
	char i_y; 
	enum dev_types dev_type; 
} STORAGE_AREA; 

void WhatIsStored(STORAGE_AREA storage[], int i_objects_in_storage)
{
	for (int i = 0; i < i_objects_in_storage - 1; i++)
	{
		printf("Serial number: %d \n", storage[i].i_ser); 
		printf("x position in store: %d \n", storage[i].i_x); 
		printf("y position in store: %d \n", storage[i].i_y);
		printf("device type: %s \n", storage[i].dev_type); 
		
	}
	return; 
}

void main()
{ 
	STORAGE_AREA storage[OBJ_IN_STORAGE] = 
	{
		{12300001, 3, 1, tablet},
		{12300002, 2, 5, smartphone},
		{12301985, 3, 2, smartphone},
		{13184756, 8, 1, laptop},
		{19471638, 2, 7, tablet},
	}; 

	WhatIsStored(storage, OBJ_IN_STORAGE); 
}
