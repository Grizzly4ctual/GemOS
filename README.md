# GemOS — User-Space Operating System Simulation
- **Scheduler**: Round-robin using pthreads.
- **Exceptions**: SEGFAULT trapping, instruction skip, trapframe dumps.
- **Semaphores**: POSIX-wrapped synchronization.
- **Trace Buffer**: In-kernel style log buffer.
- **Testing Suite**: Memory tests, segfault tests, scheduler tests.


## Build
```
make
```


## Run Tests
```
./gemos
```
Or compile individual tests:
```
gcc tests/test_memory.c -Iinclude -o test_memory -pthread
./test_memory
```


## Repository Structure
```
GemOS/
├── src/
├── include/
├── tests/
├── Makefile
└── README.md
```
