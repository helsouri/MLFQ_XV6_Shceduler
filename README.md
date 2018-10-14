# xv6-shceduler
changing xv6-schduler to MLFQ

using this github project as a reference and help: <br>
https://github.com/shreyakamath2311/Xv6-MLFQ-Scheduler <br> <br>

Edited proc.h as such: <br>
1) Added queue <br>
2) Added counters for the queues <br>
3) Added a structer for the statistics <br>
4) Added variables for clicks and priority <br><br>
Added pstat.h header file that simply contains a structure to keep track of process statistics <br> <br>

Defined new header file that now contains the system call declarations {check sysfunc.h} <br>
This is so that the compiler will catch newly defined system call function <br>
Added new system call to get process info <br>
