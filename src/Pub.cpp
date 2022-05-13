/* Pub.c */
#include "Pub.h"

int Cmp(const void *num1, const void *num2)
{
    return *(int *)num1 - *(int *)num2;
}

int Swap(int *const num1, int *const num2)
{
    int tmp = *num2;
    *num2 = *num1;
    *num1 = tmp;

    return 0;
}