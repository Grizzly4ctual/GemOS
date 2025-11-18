#ifndef GEMOS_RR_SCHEDULER_H
#define GEMOS_RR_SCHEDULER_H
void scheduler_add(void* (*fn)(void*));
void scheduler_start();
#endif