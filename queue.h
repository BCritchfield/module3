#pragma once

#include <stdint.h>
#include <stdbool.h>

typedef void queue_t;

queue_t* qopen(void);

void qclose(queue_t *qp);

int32_t qput(queue_t *qp, void *elementp);

void* qget(queue_t *qp);
