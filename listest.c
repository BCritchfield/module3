#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "list.h"

int main(void){
	//test car
	car_t *mycar;
	mycar = malloc(sizeof(car_t));
	mycar->next = NULL;

	strcpy(mycar->plate, "testplate1");
	mycar->price = 1000.0;
	mycar->year = 1998;

	//empty list tests
	car_t *testget = lget();
	if(testget != NULL){
		printf("lget() on empty list fails");
		return 1;
	}

	char *testplate = "testplate1";
	if(lremove(testplate) != NULL){
		printf("lremove() on empty list fails");
		return 1;
	}
	
	if(lput(mycar) != 0){
		printf("lput() on empty list fails");
		return 1;
	}

	//non-empty list tests
	if(lput(mycar) != 0){
		printf("lput() on non-empty list fails");
		return 1;
	}

	if(lremove(testplate) == NULL){
		printf("lremove() on non-empty list fails");
		return 1;
	}

	printf("all tests passed for list.c");
	return 0;

}
