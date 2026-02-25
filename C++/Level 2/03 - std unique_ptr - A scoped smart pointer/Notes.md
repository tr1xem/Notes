# std::unique_ptr - A scoped smart pointer

## The Problems

![](assets/snapshot.jpg)

\*ptr2 could have been something random as array is already deleted.

**Smart pointers solves all of this**

- They delete themself once out of scope
![](assets/Pasted%20image%2020260213205334.png)

![](assets/Pasted%20image%2020260214133728.png)

![](assets/Pasted%20image%2020260214134203.png)

