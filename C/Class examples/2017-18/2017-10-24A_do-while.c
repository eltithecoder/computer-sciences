// Copyright © 2017 Giovanni Squillero <squillero@polito.it>
// Free for personal or classroom use; see 'LICENCE.md' for details.
// https://github.com/squillero/computer-sciences

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t = 999;
    do
    {
        printf("do ");
        t = t + 1;
    } while (t < 10);
    printf("while!\n");

    return 0;
}
