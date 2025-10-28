#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>	// printf() and scanf()
#include <stdlib.h>	// rand()
#include <time.h>
#include "screen.h"
#include "pascal.h"

int main(void) {
	int row;
	printf("How many rows do you want to see: ");
	scanf("%d", &row);
	setBGcolor(WHITE);
	clearScreen();
	srand(time(NULL));
	for (int i = 0; i < row; i++) {
		gotoXY(40+(row-i)*2, i + 5);
		
		for (int j = 0; j <= i; j++) {
			setFGcolor(RED + rand()%7);
			printf("%4d", n_choose_k(i, j));
		}
		printf("\n");	// make a new row
	}
}