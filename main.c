#include <stdio.h>

int main(void) {
    int i = 10;
    char c = 'a';

    int *iptr;        /* integer pointer */
    iptr = &i;        /* iptr points to i */
    char *cptr;       /* char pointer */
    cptr = &c;        /* cptr points to c */
    int *iptr2;       /* another integer pointer */
    iptr2 = iptr;     /* iptr2 points to the same place as iptr */

    printf("i : %p\n%p (size:%i)\n", iptr, &i, (int)sizeof(iptr));
    printf("c : %p\n%p (size:%i)\n", cptr, &c, (int)sizeof(cptr));
    printf("iptr2 : %p, %i\n", iptr2, *iptr2);
    return 0;
}