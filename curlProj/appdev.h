#pragma once

#define NN 20

typedef struct{
	int min, max;
	char rname[NN];
}rock;

void send_data(rock);
