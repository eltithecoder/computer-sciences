/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    for (int t = 0; t < 10; ++t)
    {
        int c = getchar();
        if (c >= 'a' && c <= 'z')
        {
            int pos = c - 'a';
            printf("%c: position: %d\n", c, pos);
            printf("===> %c (%d)\n", 'A' + pos, 'A' + pos);
        }
        else
        {
            printf("%c\n", c);
        }
    }
    return EXIT_SUCCESS;
}
