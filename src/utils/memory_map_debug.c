#include <stdio.h>
#include <stdlib.h>
#include "memory_map_debug.h"

void debug_print_memory_map() {
    printf("[GemOS] Memory map debugging not yet implemented.\n");
}

void memory_map_dump() {
FILE* f = fopen("/proc/self/maps", "r");
if (!f) return;
char line[512];
while (fgets(line, sizeof(line), f)) printf("%s", line);
fclose(f);
}