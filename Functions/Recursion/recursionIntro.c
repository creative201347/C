#include <stdio.h>
int func(int n)
{
    if (n == 1)
        return 1;
    else
        return 1 + func(n - 1);
}
int main()
{
    int n = 3;
    printf("%d", func(n));
    return 0;
}

/*
Recusrion is a process in which a function calls itself
    directly or indirectly

    int fun()
    {
        ...
        func();
    }
*/
