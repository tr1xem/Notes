# Level 2

# Lvalue and Rvalue

![](Attachments/Pasted%20image%2020241018124107.png)

![](Attachments/Pasted%20image%2020241018124327.png)
sometimes (a+b) is called xvalue (expiring value)

## Lvalue Reference

![](Attachments/Pasted%20image%2020241018124804.png)
```cpp
const int& ref = 10; // works
int& ref = 10; // gives error
```
in const compiler creates a tmp var and equals it to 10

## Rvalue Reference

![](Attachments/Pasted%20image%2020241018125700.png)

```cpp

std::string
```
