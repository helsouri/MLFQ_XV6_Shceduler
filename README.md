# xv6-shceduler
changing xv6-schduler to MLFQ <br> <br>
## Problem Statement
School assignment to reconstruct default queue in an OS based for teaching from round robin to multi level feedback queue.<br>

## 1 MLFQ Design
The existing scheduler in xv6 is a Round-Robin (RR) scheduler. Upon each timer interrupt, the interrupt
handler switches to the kernel scheduler, which then selects the next available process to run. This
scheduler, while simple, is too primitive to do anything interesting. In this project, you will be putting a
new scheduler – the Multi-Level Feedback Queue (MLFQ) – into xv6. It has six queues: Qi
i = 1, 2, . . . , 6 <br>
with time quantum size i ∗ 100 ms for Qi<br>

### The detailed policy is described as follows:

<br>• Any new process will be inserted to the end of Queue Q1;
<br>• The scheduler will always choose the front process in the highest-priority non-empty queue in the
order of Q1, Q2, . . ., and Q6;
<br>• Any chosen process will be scheduled for the queue-corresponding quantum size or the remaining
burst size if its remaining burst size is large enough;
<br>• If the process has nothing remaining, the process will be removed from the queue after its execution;
<br>• If the process is not done within this round, it shall be moved to the next lower-priority queue
except for any process in Q6;
<br>• Q6 runs a Round-Robin with time quantum size as 600 ms. A pointer is needed to maintain the
position of the running process. If a process is not done within the assigned quantum size, it
remains in Q6 competing for the next round.
<br>• The scheduler adopts priority boosting. Every 1200 ms, all jobs will be pushed to Q1. <br>

## 2 Testing
For the testing, in the xv6 shell please run as follows:<br>
$ spin 100000 &; spin 200000 &; spin 300000 &;<br>
These three spins are executed in a single command line and run concurrently in the background. Please
use cprintf() in the kernel to print on console the information for running processes as follows:
Process spin 12 has consumed 100 ms in Q1
Process spin 13 has consumed 100 ms in Q1
Process spin 14 has consumed 100 ms in Q1
Process spin 12 has consumed 100 ms in Q2
...
Basically, at each timer interrupt, you print out the running process information. The information of the
process ID and the process name, which are stored in the proc struct. Focus only the spin processes.
