#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(0, "Russian");
	int KolChet = 0, KolNeChet = 0;
	float sumKolChet = 0.0, sumKolNeChet = 0.0;
	int chislo;
	printf("Enter numbers (0 to quit):\n");
	while (scanf_s("%d", &chislo), chislo != 0)
	{
		if (chislo % 2 == 0)
		{
			KolChet++;
			sumKolChet += chislo;
		}
		else
		{
			KolNeChet++;
			sumKolNeChet += chislo;
		}
	}
	printf("Колличество четных: %d\n", KolChet);
	printf("Колличество нечетных: %d\n", KolNeChet);
	printf("Среднее значение четных: %.2f\n", sumKolChet / KolChet);
	printf("Среднее значение нечетных: %.2f\n", sumKolNeChet / KolNeChet);
	return 0;
}
