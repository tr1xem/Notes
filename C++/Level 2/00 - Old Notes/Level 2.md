# Level 2

# Lvalue and Rvalue

![](attachments/Pasted%20image%2020241018124107.png)

![](attachments/Pasted%20image%2020241018124327.png)
sometimes (a+b) is called xvalue (expiring value)

## Lvalue Reference

![](attachments/Pasted%20image%2020241018124804.png)
```cpp
const int& ref = 10; // works
int& ref = 10; // gives error
```
in const compiler creates a tmp var and equals it to 10

## Rvalue Reference

![](attachments/Pasted%20image%2020241018125700.png)

```cpp

std::string s3 = s1+s2; // will perform concat and then copies the value to s3
std::string&& s3 = s1+s2; // will just reference to the value of concat
```


# std::move or  the idea of move semantics


![](attachments/Pasted%20image%2020241018130557.png)

# Interface (.hpp) vs Implementation (.cpp)

![](attachments/Pasted%20image%2020241018133918.png)

![](attachments/Pasted%20image%2020241018134321.png)

