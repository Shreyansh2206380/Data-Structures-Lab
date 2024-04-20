#include <stdio.h>
void compare(int *a, int *b);
void main()
{
    int a, b;
    printf("Enter two number that you want to compare: \n");
    scanf("%d\n%d", &a, &b);
    compare(&a, &b);
    return 0;
}
void compare(&a, &b)
{
    if (*a > *b)
    {
        printf("By comparing the given number %d is greater then %d ", a, b);
    }
    else
    {
        printf("By comparing the given number %d is greater then %d ", b, a);
    }
}
