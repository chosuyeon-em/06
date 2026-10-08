#include <stdio.h>

int sumTwo(int a, int b)
{
    return(a + b);
}

int square(int n)
{
    return n*n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;

    return y;
}

int main(void)
{
    printf("sumTwo result : %i\n", sumTwo(4, 3));
    printf("square result : %i\n", square(4));
    printf("get_max result : %i\n", get_max(4, 5));


    return 0;
}