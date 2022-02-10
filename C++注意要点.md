```C++
	char * = "Hello World";
```
```c++
    const char *s1 = "Hello World";
    const char *s2 = "Hello";
	char* s1 = (char *)"Hello World";
```

等号右边的"hello"是一个不变常量，在c++中叫做string literal，type是const char *，而p则是一个char指针。如果强行赋值就是将右边的常量强制类型转换成一个指针，结果就是我们在修改一个const常量

