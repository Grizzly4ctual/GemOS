#include "gemos_semaphore.h"
#include <semaphore.h>
#include <stdio.h>


void sem_init_gemos(sem_t* s, int value) {
sem_init(s, 0, value);
}


void sem_wait_gemos(sem_t* s) {
sem_wait(s);
}


void sem_post_gemos(sem_t* s) {
sem_post(s);
}