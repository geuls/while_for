#include <stdio.h>
#include "stdafx.h"
#include<locale.h>
#include<limits.h>
int main (void)
{
	int n, k, factZnac;
	setlocale(0, "Russian");
	printf("Значение десяти интегралов\n");
	for (k = 1; k <= 10; ++k) 
	{
		factZnac = 1;
		for (n = 1; n <= k; ++n)
		{
			factZnac *= n;
		}
		printf("%i!  =  %i\n", n, factZnac);
	}
	return 0;
}

