#define _GNU_SOURCE
#include "trapframe.h"
#include <stdio.h>
#include <ucontext.h>

void dump_trapframe(ucontext_t* ctx) {
    printf("RIP: %llx\n", (unsigned long long)ctx->uc_mcontext.gregs[REG_RIP]);
}
