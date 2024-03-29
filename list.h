#pragma once

#include <stdint.h>

#define MAXREG 10

typedef struct car {
	struct car *next;
	char plate[MAXREG];
	double price;
	int year;
} car_t;

int32_t lput(car_t *cp);

car_t *lget();

void lapply(void (*fn)(car_t *cp));

car_t *lremove(char *platep);
