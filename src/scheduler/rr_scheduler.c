#include "rr_scheduler.h"
#include <pthread.h>
#include <unistd.h>
#include <stdio.h>


#define MAX_THREADS 32
static pthread_t threads[MAX_THREADS];
static int tcount = 0;


void scheduler_add(void* (*fn)(void*)) {
if (tcount < MAX_THREADS)
pthread_create(&threads[tcount++], NULL, fn, NULL);
}


void scheduler_start() {
for (int i = 0; i < tcount; i++)
pthread_join(threads[i], NULL);
}