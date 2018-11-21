#include <stdio.h>
#include <stdlib.h>

/* Aufgabe 7 Teil 1 mit Struktogramm
		
	In der Übungsstunde am 06.11.2018 wurde spontan, gemeinsam ein 
	Struktogramm zu der Aufgabe 7 Teil 1 entwickelt. Da das Struktogramm
	nicht zu meiner Musterlösung passt, habe ich hier nochmal eine Lösung 
	entwickelt die exakt dem Struktogramm nachempfunden wurde.
																							- AW 
*/

#define n 3 // Anzahl Reihenglieder bis zu denen Entwickelt werden soll
#define M_PI 3.14159 // Kreiszahl Pi
	
int main()
{

	/* Variablendeklaration und Initialisierung */
	float f_winkel_grad = 0;
	float f_winkel_bogen = 0;
	int i = 0, j = 0; //Schleifenzähler
	float f_sinus = 0;
	int i_fakultaet = 0;
	float f_potenz = 0;
	float f_vorzeichen = -1;
	
	/* Eingabeaufforderung */
	printf("Bitte geben sie einen Winkel in Grad ein:\n");
	scanf("%f", &f_winkel_grad);
	
	/* Umrechnung in Bogenmaß */
	f_winkel_bogen = M_PI * ((float)f_winkel_grad / 180);
	
	/* Berechnung als Reihenentwicklung bis zum n-ten Glied */
	for(i = 1; i <= n; i += 2)
	{	
		/*Berechnung des Vorzeichens */
		f_vorzeichen *= (-1.0);
	
		/* Potenzberechnung */
		f_potenz = f_winkel_bogen;
		for(j = 2; j <= i; j++) 
		{
			f_potenz *= f_winkel_bogen;
		}
		
		/* Fakultätsberechnung */
		i_fakultaet = 1;
		for(j = 2; j <= i; j++)
		{
			i_fakultaet *= j;
		}
		
		/* Berechnung des Reihengliedes */
		f_sinus += ((f_potenz/ i_fakultaet)*f_vorzeichen);
	}
	
	/* Ausgabe des Reihengliedes */
	printf("\nDer Sinus des Winkels %.2f betraegt %.2f", f_winkel_grad, f_sinus);
	printf("\n");
	
	system("PAUSE");
	
	return 0;
}

