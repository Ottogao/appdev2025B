#pragma comment(lib, "libcurl.lib")
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "appdev.h"

int main(void){
	rock r;
	srand(time(NULL));
	r.min = rand()%50 + 1;
	r.max = rand()%50 + 51;
	printf("Your name: ");
	scanf("%s", r.rname);
	send_data(r);
}
