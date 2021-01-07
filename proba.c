#include <stdio.h>
#include <stdlib.h>

#define bool int
#define TRUE  1
#define FALSE 0

int a, b = 5;

int main() 
{
    int x = 1;
    printf("%d\n", x++ + x++);
    return 0;
}