# xv6-shceduler
changing xv6-schduler to MLFQ

using this github project as a reference and help: <br>
https://github.com/shreyakamath2311/Xv6-MLFQ-Scheduler <br> <br>
Edited proc.h as such:
1) Added queue
2) Added counters for the queues
3) Added a structer for the statistics {Check pstat.h file we will make later }
4) Added variables for clicks and priority
