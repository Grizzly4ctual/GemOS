#define _GNU_SOURCE
#include "mmap_wrapper.h"
#include <sys/mman.h>
#include <stdio.h>

void* gemos_mmap(size_t size) {
    size = (size + 4095) & ~4095;
    return mmap(NULL, size, PROT_READ | PROT_WRITE, MAP_PRIVATE | MAP_ANON, -1, 0);
}

void* gemos_mremap(void* old, size_t old_size, size_t new_size) {
    new_size = (new_size + 4095) & ~4095;
    void* p = mremap(old, old_size, new_size, MREMAP_MAYMOVE);
    return (p == MAP_FAILED) ? NULL : p;
}
