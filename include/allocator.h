#ifndef GEMOS_ALLOCATOR_H
#define GEMOS_ALLOCATOR_H
#include <stddef.h>
void* gemos_malloc(size_t size);
void gemos_free(void* ptr, size_t size);
#endif