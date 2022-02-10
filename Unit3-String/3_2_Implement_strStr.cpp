#include <iostream>
#include <cstdio>
#include <string>
#include<stdio.h>
using namespace std;

char *Mystrstr(const char *haystack, const char *needle)
{
    // const size = haystack.size() - needle.size() +1;
    char *cp = (char *)haystack;
    char *s1, *s2;
    if (!*haystack)
        return (char *)haystack;
    while (*cp)
    {
        s1 = cp;
        s2 = (char *)needle;
        while (*s2 && !(*s1 - *s2))
        {
            s1++;
            s2++;
        }
        if (!*s2)
            return cp;
        cp++;
    }
    return NULL;
}

int main()
{
    const char *s1 = "Hello World";
    const char *s2 = "Hello";
    char* cp = Mystrstr(s1,s2);
    cout<<(void*)cp<<endl;
    cout<<(void*)s1<<endl;
    cout<<typeid(s1).name()<<endl;
    return 0;
}