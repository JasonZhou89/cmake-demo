/* main.c */
#include <stdio.h>
#include "Pub.h"
#include "Calculator.h"

int main()
{
    printf("Hello CMAKE_PROJ_DEMO.\n");

    int num1 = 100;
    int num2 = 10;

    int ret = Add(num1, num2);
    printf("Add result(%d, %d) = %d\n", num1, num2, ret);
    printf("Subtract result(%d, %d) = %d\n", num1, num2, Subtract(num1, num2));
    printf("Multiply result(%d, %d) = %d\n", num1, num2, Multiply(num1, num2));
    printf("Divede result(%d, %d) = %d\n", num1, num2, Divide(num1, num2));

    (void)Swap(&num1, &num2);
    printf("Swap result(%d, %d)\n", num1, num2);

    return 0;
}