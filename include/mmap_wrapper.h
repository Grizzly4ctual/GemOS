#ifndef GEMOS_MMAP_WRAPPER_H
#define GEMOS_MMAP_WRAPPER_H
#include <stddef.h>
void* gemos_mmap(size_t size);
void* gemos_mremap(void* old, size_t old_size, size_t new_size);
#endif