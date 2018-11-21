#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define n 3

int main()
{
	/* Aufgabe 7 Teil 1 */

	/* Variablendeklaration und Initialisierung */
	float f_winkel_grad = 0;
	float f_winkel_bogen = 0;
	int i = 0, j = 0; //Schleifenz�hler
	float f_sinus = 0;
	int i_fakultaet = 0;
	float f_potenz = 0;
	
	/* Eingabeaufforderung */
	printf("Bitte geben sie einen Winkel in Grad ein:\n");
	scanf("%f", &f_winkel_grad);
	
	/* Umrechnung in Bogenma� */
	f_winkel_bogen = M_PI * ((float)f_winkel_grad / 180);
	
	/* Berechnung als Reihenentwicklung bis zum n-ten Glied */
	for(i = 1; i <= n; i += 2)
	{	
		/* Potenzberechnung */
		f_potenz = f_winkel_bogen;
		for(j = 2; j <= i; j++) 
		{
			f_potenz *= f_winkel_bogen;
		}
		
		/* Fakult�tsberechnung */
		i_fakultaet = 1;
		for(j = 2; j <= i; j++)
		{
			i_fakultaet *= j;
		}
		
		/* Berechnung des Reihengliedes */
		if(((i + 1) / 2) % 2)
		{
			f_sinus += f_potenz/ i_fakultaet;
		}
		else
		{
			f_sinus -= f_potenz/ i_fakultaet;
		}
	}
	
	/* Ausgabe des Reihengliedes */
	printf("\nDer Sinus des Winkels %.2f betraegt %.2f", f_winkel_grad, f_sinus);
	printf("\n");
	
	system("PAUSE");
	
	return 0;
}

