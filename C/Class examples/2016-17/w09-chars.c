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
        printf("Char '%c' (%d)", c, c);
        if (isalnum(c))
        {
            printf(" ALNUM");
        }
        if (isdigit(c))
        {
            printf(" IT'S A DIGIT");
        }
        if (isspace(c))
        {
            printf("SPACE!");
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
