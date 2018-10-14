# xv6-shceduler
changing xv6-schduler to MLFQ

using this github project as a reference and help: <br>
https://github.com/shreyakamath2311/Xv6-MLFQ-Scheduler <br> <br>


Edited proc.h as such that i added definitions for the queues and their counters.<br>
I also added a structer for the statistics and variables for clicks and priority <br>
Added pstat.h header file that simply contains a structure to keep track of process statistics <br>
Defined new header file that now contains the system call declarations {check sysfunc.h} <br>
This is so that the compiler will catch newly defined system call function <br> 
Edited sysfile.c to include the function for getting information about a process <br>
More edits to user.h and usys.S to implement newly created function/system call that gets process info <br>
Made many changes to proc.c especially in the scheduler section. <br><br>

I must say that this is not perfect but it works very well <br>
Missing the option of checking back from Q1 always will add more print commands to debugg<br>
use : $host.UI.RawUI.WindowTitle = "New Title" to chnage power shell title <br>

added print fuctions to proc.c <br>
