#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <malloc.h>
#include <stdbool.h>
#include "list.h"


static car_t *front=NULL;

int32_t lput(car_t *cp){
	//make the new car point to the old front
	cp->next = front;
	//front pointer should now point to new car
	front = cp; 
	return 0;
}

car_t *lget(){
	//check if list is empty
	if(front == NULL){
		return NULL;
	}
	//get the first car in the list
	car_t *result = front;
	result = front;
	//remove front
	front = front->next;
	
	return result;
}

void lapply(void (*fn)(car_t *cp)){
	car_t *current = front;
	while(current != NULL){
		fn(current);
		current = current->next;
	}
}

car_t *lremove(char *platep){
	car_t *current = front;
	car_t *previous = NULL;
	car_t* result = NULL;
	while(current != NULL){
		//if the plate matches current's plate
		char* currentsplate = (current->plate);
		if(strcmp(currentsplate, platep) == 0){
			//if the plate is the front
			if(previous == NULL){
				result = current;
				front = front->next;
				current = front;
			}
			else{
				result = current;
				previous->next = current->next;
				current = current->next;
			}
		}
	}
	return result;
}


