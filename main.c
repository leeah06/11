#include <stdio.h>

int main(void) {
    int i = 4;   /* try 300 as well */

    int *pi = &i;
    char *pc = (char *)&i;   /* cast to avoid compiler warning */

    printf("%i, %i, %i\n", i, *pi, *pc);
    return 0;
}