# push_swap
## Description
Push_swap is a program written in C that solves the sorting problem for two stacks named a and b. <br/>
The goal is to sort the numbers in stack a in ascending order using a specific set of operations. <br/>
The program aims to find the smallest list of instructions to achieve the desired sorted state. <br/>

## ✅ Project Rules
• The program is composed of 2 stacks named a and b. <br/>
&emsp; &emsp; • the stack a contains a random amount of negative and/or positive numbers which cannot be duplicated. <br/>
&emsp; &emsp; • b is empty. <br/>
• The goal is to sort in ascending order numbers into stack a. <br/>

• To do this you have the following operations at your disposal: <br/>

• sa: swap a - swap the first 2 elements at the top of stack a. Do nothing if there is only one or no elements). <br/>
• sb: swap b - swap the first 2 elements at the top of stack b. Do nothing if there is only one or no elements). <br/>
• ss: sa and sb at the same time. <br/>
• pa: push a - take the first element at the top of b and put it at the top of a. Do nothing if b is empty. <br/>
• pb: push b - take the first element at the top of a and put it at the top of b. Do nothing if a is empty. <br/>
• ra: rotate a - shift up all elements of stack a by 1. The first element becomes the last one. <br/>
• rb: rotate b - shift up all elements of stack b by 1. The first element becomes the last one. <br/>
• rr: ra and rb at the same time. <br/>
• rra: reverse rotate a - shift down all elements of stack a by 1. The last element becomes the first one. <br/>
• rrb: reverse rotate b - shift down all elements of stack b by 1. The last element becomes the first one. <br/>
• rrr: rra and rrb at the same time.<br/>
