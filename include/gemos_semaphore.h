#ifndef GEMOS_SEMAPHORE_H
#define GEMOS_SEMAPHORE_H

#include <semaphore.h>

void sem_init_gemos(sem_t* s, int value);
void sem_wait_gemos(sem_t* s);
void sem_post_gemos(sem_t* s);

#endif
