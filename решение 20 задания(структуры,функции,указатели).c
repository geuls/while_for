#include "stdafx.h"
#include <stdio.h>
#include <string.h>
int main(void)
{
	char first[100] = "test";
	char *a = first;
	char second[100] = "123";
	char *b = second;

	strcat_s(a,150,b);
	puts(a);
	return 0;

}