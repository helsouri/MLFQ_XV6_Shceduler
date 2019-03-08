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

• Any new process will be inserted to the end of Queue Q1;
• The scheduler will always choose the front process in the highest-priority non-empty queue in the
order of Q1, Q2, . . ., and Q6;
• Any chosen process will be scheduled for the queue-corresponding quantum size or the remaining
burst size if its remaining burst size is large enough;
• If the process has nothing remaining, the process will be removed from the queue after its execution;
• If the process is not done within this round, it shall be moved to the next lower-priority queue
except for any process in Q6;
• Q6 runs a Round-Robin with time quantum size as 600 ms. A pointer is needed to maintain the
position of the running process. If a process is not done within the assigned quantum size, it
remains in Q6 competing for the next round.
• The scheduler adopts priority boosting. Every 1200 ms, all jobs will be pushed to Q1.
