# std::unique_ptr - A scoped smart pointer

## The Problems

![](attachments/snapshot.jpg)

\*ptr2 could have been something random as array is already deleted.

**Smart pointers solves all of this**

- They delete themself once out of scope
![](attachments/Pasted%20image%2020260213205334.png)

![](attachments/Pasted%20image%2020260214133728.png)

![](attachments/Pasted%20image%2020260214134203.png)

