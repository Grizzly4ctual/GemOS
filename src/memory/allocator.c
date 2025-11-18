#include "allocator.h"
#include <stdlib.h>
#include <sys/mman.h>
#include <string.h>


void* gemos_malloc(size_t size) {
size = (size + 4095) & ~4095;
void* p = mmap(NULL, size, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANON, -1, 0);
return (p == MAP_FAILED) ? NULL : p;
}


void gemos_free(void* ptr, size_t size) {
size = (size + 4095) & ~4095;
munmap(ptr, size);
}