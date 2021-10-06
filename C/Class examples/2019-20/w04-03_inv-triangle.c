/*  ######       /******************************************************\
|*  #######      * CLASS EXAMPLE FOR "COMPUTER SCIENCES" (04JCJ**)      *
|*  ####   \     * https://github.com/squillero/computer-sciences       *
|*   ###G  c\    *                                                      *
|*   ##     _\   * Copyright © Giovanni Squillero <squillero@polito.it> *
|*   |    _/     * Free for personal or classroom use.                  *
\*   |   _/      \******************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dim;
    printf("Dim: ");
    scanf("%d", &dim);
    for (int r = 0; r < dim; r = r + 1)
    {
        // line
        for (int s = 0; s < r; s = s + 1)
        {
            printf(" ");
        }
        for (int h = 0; h < dim - r; h = h + 1)
        {
            printf("#");
        }

        printf("\n");
    }
}
