#include <stdio.h>

int main(void)
{

    int x;
    int *p1, *p2;

    p1 = &x;
    p2 = p1;

    printf("%p", p2);

    return 0;
}
