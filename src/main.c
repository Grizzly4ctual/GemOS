#include <stdio.h>
#include "exception_handler.h"
#include "rr_scheduler.h"
#include "trace_buffer.h"
#include "memory_map_debug.h"

void* worker(void* arg) {
    (void)arg;
    for (int i = 0; i < 3; i++) {
        printf("[GemOS Thread] iteration %d\n", i);
    }
    return NULL;
}

int main() {
    printf("=== GemOS Boot ===\n");

    setup_exception_handlers();
    trace_log("GemOS kernel initialized.\n");

    // Dump memory map for debugging
    printf("--- Memory Map ---\n");
    debug_print_memory_map();

    // Scheduler demonstration
    scheduler_add(worker);
    scheduler_add(worker);
    scheduler_start();

    // Trace buffer output
    printf("\n=== Trace Buffer Dump ===\n");
    trace_dump();

    printf("\n=== GemOS Shutdown ===\n");
    return 0;
}
