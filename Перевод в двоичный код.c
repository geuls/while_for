#include "stdafx.h"
#include <stdio.h> 
#include <locale.h>
void bin(unsigned long);

int main(void) {
	setlocale(0, "Russian");
	unsigned long a;
	scanf_s("%lu", &a);
	printf("Эквивалент в двоичном коде: ");
	bin(a);
	putchar('\n');
	return 0;
}

void bin(unsigned long a) { 
	int g;
	g = a % 2;
	if (a >= 2)
		bin(a / 2);
	putchar(g == 0 ? '0' : '1');
}