#include "stdafx.h"
#include <stdio.h>

int main(void)
{
	int P[150];
	for (int i = 0, k = 2; i < 149; ++i, ++k)
	{
		P[i] = k;
		if (k % 2 == 0 && k != 0)
			k  = 0;
		printf("%3i\n", k);
	}

	return 0;
}