#include <stdio.h>
int main()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        if (i == 5)
            break;
        // continue;
        printf("%d\t", i);
    }

    return 0;
}

// Break statement exits form loop
// break statement is used in loops and switch cases
// 0       1       2       3       4

// contine statement skips that instance
// it doenot get exited from the loop but skips that statement
// 0       1       2       3       4       6       7       8       9
