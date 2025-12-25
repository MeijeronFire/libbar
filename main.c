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

	srand(time(NULL));
	for (int i = 0; i < 50; i++) {
		usleep(randMax(200000));
		printBar(description, i*2);
	}
	flushBar(description);
	return 0;
}
