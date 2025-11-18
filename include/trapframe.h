#ifndef GEMOS_TRAPFRAME_H
#define GEMOS_TRAPFRAME_H
#include <ucontext.h>
void dump_trapframe(ucontext_t* ctx);
#endif