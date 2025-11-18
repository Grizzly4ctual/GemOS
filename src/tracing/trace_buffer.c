#include "trace_buffer.h"
#include <stdio.h>
#include <string.h>


static char buf[4096];
static int idx = 0;


void trace_log(const char* msg) {
int len = strlen(msg);
if (idx + len < 4096) memcpy(buf + idx, msg, len), idx += len;
}


void trace_dump() {
fwrite(buf, 1, idx, stdout);
}