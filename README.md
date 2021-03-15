## Project #0: Warming up C programming

### Goal
To warm up C programming, implement the stack with list head. In addition, get familiar with PASubmit, our project assignment management system.  


### Problem Specification
- Operating systems are full of data structures that abstract many system resources. Thus, you must understand fundamental data structures to explore further into operating systems. In this sense, your task is to **implement the stack with the list head.**

- See [Wikipedia](https://en.wikipedia.org/wiki/Stack_(abstract_data_type)) for the explanation about the stack.

- To *materialize* the abstract data type into C code, you need some mechanisms to give an ordered relationship between objects. In this programming assignment, it is enforced to use the `stack` instance and `struct entry` data structure declared in `stack.c`.
  - You should use them as-is without modifying them.
  - You should not define your own data structures nor instances. It is prohibited to (but not limited to) define your own array and some indexes pointing to the top and tail of the stack.

- The list head is one of the most handy, powerful data structures widely used in the Linux kernel. At first, it looks very weird, and its implementation (in `list_head.h`) is hard to understand even if you have mastered pointers in C. Once you get used to it, however, it will be your best friend for programming in C.
- In fact, you don't have to understand how it works, but just try to get used to using it. It sounds crazy, but become Neo (believe me).
- Here are some (but not limited to) sites that may help you
  - Introduction: https://kernelnewbies.org/FAQ/LinkedLists
  - Kernel API manual: https://www.kernel.org/doc/html/v4.15/core-api/kernel-api.html
  - Advanced explanation: https://medium.com/@414apache/kernel-data-structures-linkedlist-b13e4f8de4bf

- There are three functions in `stack.c` waiting for your work. Complete `push_stack()`, `pop_stack()`, and `dump_stack()`.

- `push_stack()` and `pop_stack()` are straightforward. Push the given string value into the stack, or pop the top of the stack. You may use the head of the list head as the top or the bottom of the stack at your own discretion.

- `dump_stack()` should dump the contents in `stack`. Print out the strings in `stack` from the bottom to the top. The strings should be printed out to `stderr` to get properly graded in pasubmit. To traverse the list head, you must use one of the functions with `list_for_` as prefix.

- DO NOT ALLOCATE/DEFINE AN ARRAY TO HOLD `struct entry`. Instead, each entry should be dynamically allocated and freed using `malloc` and `free`.

- DO NOT ACCESS `prev` and `next` in `list_head` directly. You should use the functions provided by the library to modify entries in the list instead of exploiting internal data structures. YOU WILL NOT GET ANY POINT IF YOUR CODE ACCESS THESE VARIABLES DIRECTLY.


