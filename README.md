## Project #0: Warming up C programming

### *** Due on 24:00, March 19 (Friday) ***


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

- `dump_stack()` should dump the contents in `stack`. Print out the strings in `stack` from the top to the bottom. The strings should be printed out to `stderr` to get properly graded in pasubmit. To traverse the list head, you must use one of the functions with `list_for_` as prefix.

- DO NOT ALLOCATE/DEFINE AN ARRAY TO HOLD `struct entry`. Instead, each entry should be dynamically allocated and freed using `malloc` and `free`.

- DO NOT ACCESS `prev` and `next` in `list_head` directly. You should use the functions provided by the library to modify entries in the list instead of exploiting internal data structures. YOU WILL NOT GET ANY POINT IF YOUR CODE ACCESS THESE VARIABLES DIRECTLY.


### Logistics
- This is an individual project; you must work on the assignment alone.
- The detailed logistics will be announced once the PA is started.
- You can find the template code and this handout through the "Handout" button in the PA description. Start this programming assignment by cloning this repository from https://github.com/sslab-ajou/pa0.
- Submit only `stack.c` for the code. PASubmit will not evaluate your submission if you submit files with different names. You don't need to submit the report nor git repository this time.


### Tips and Restriction
- DO NOT FORK THIS REPOSITORY. "Fork" makes the forked repository as public, and enlists the forked repository in the list. This means, if you fork this repository and submit your work to the repository, other students can easily steal your implemantation, making both of you F.
- The grading system only examines the messages printed out to `stderr`. Thus, you may use `printf` as you need.
	- This implies you must print out values properly to implement `dump_stack()` as instructed above. 

- The answer is very easy to guess. However, never forge outputs by explicitly printing out values; it will get penalized as same as the cheating.

- It is highly recommended you to set up an development environment on Debian Linux. In fact, I don't care what operating systems or development environments you are using. But the grading will be done by the result from PASubmit which runs Debian Buster. If your code works fine on your environment but not on PASubmit, it means you wrote wrong code. Period.
