#include <stdio.h>
#include <stdlib.h>

int main()
{
	float f_starter_cash = 0;
	float f_interest_rate = 0;
	float f_interest_factor = 0; 
	int i_duration = 0;
	float f_interest_factor_total = 1; 
	float f_interest_earnings = 0;
	
	printf("Please input the amount of money at start (starter cash): "); 

	scanf("%f", &f_starter_cash);

	printf("Please input the interest rate in percent!): ");

	scanf("%f", &f_interest_rate);
	f_interest_factor = f_interest_rate/100 + 1;

	printf("Please input the duration in years: ");

	scanf("%i", &i_duration);

	for (int i = 0; i < i_duration; i++)
	{
		f_interest_factor_total = f_interest_factor_total * f_interest_factor; 
	}

	f_interest_earnings = (f_interest_factor_total - 1) * f_starter_cash; 

	printf("Your interest earning is: %f \n", f_interest_earnings);
	return EXIT_SUCCESS;
}
