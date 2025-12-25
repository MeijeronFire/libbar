// SPDX-License-Identifier: GPL
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "bar.h"

int randMax(int max)
{
	return rand() % (max + 1);
}

int main(void)
{
	char description[] = "Lorem Ipsum - ";

	printBar("Lorem Ipsm - ", 50);
	printf("\n");
	flushBar("Completed - ");
	return 0;
}
