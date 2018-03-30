#include <stdio.h>
#include "stdafx.h"


int main (void)
{
	int triangularNumber = 0;
	int n;
	for (n = 0; n <= 50; n = n + 5)
	{
		triangularNumber = (n * (n + 1)) / 2;
		printf("triangularNumber is %i\n", triangularNumber);
	};
	return 0;
}

