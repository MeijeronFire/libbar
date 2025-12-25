// SPDX-License-Identifier: GPL
#include <stdio.h>
#include "bar.h"

void flushBar(char *description)
{
	char bar[BAR_WIDTH + 3] = "[##################################################]";

	printf("\033[2K\033[G");
	printf(description);
	printf(bar);
	putchar('\n');
}

void printBar(char *description, int percentage)
{
	char bar[BAR_WIDTH + 3] = "[--------------------------------------------------]";

	for (int i = 0; i < (i > 100 ? 50 : (percentage / 2)); i++)
		bar[i+1] = '#';
	printf("\033[2K\033[G");
	printf(description);
	printf(bar);
	fflush(stdout);
}
