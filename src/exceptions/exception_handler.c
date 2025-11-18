#define _GNU_SOURCE
#include "exception_handler.h"
#include "trapframe.h"
#include <signal.h>
#include <stdio.h>
#include <ucontext.h>

static void segv_handler(int sig, siginfo_t* info, void* ctx) {
    ucontext_t* uc = (ucontext_t*)ctx;

    printf("[GemOS] SEGFAULT at %p. Skipping instruction.\n", info->si_addr);

    // Skip the faulting instruction (x86_64)
    uc->uc_mcontext.gregs[REG_RIP] += 2;
}

void setup_exception_handlers() {
    struct sigaction sa = {0};
    sa.sa_sigaction = segv_handler;
    sa.sa_flags = SA_SIGINFO;
    sigaction(SIGSEGV, &sa, NULL);
}
