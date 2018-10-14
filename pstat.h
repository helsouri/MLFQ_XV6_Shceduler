#include "param.h"

struct pstat {
    int inuse[NPROC]; // whether this slot of the process table is in use (1 or 0)
    int pid[NPROC];   // PID of each process
    int priority[NPROC]; // current priority level of each process (1-6)
    int ticks[NPROC][6]; // number of ticks each process has accumulated at each of 6 priorities
};
