#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num <= 3)
        return true;
    if (num % 2 == 0 || num % 3 == 0)
        return false;
    for (int i = 5; i * i <= num; i += 6)
    {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}
void sumOfPrimeElements(int *arr, int n, int *sum)
{
    *sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
        {
            *sum += arr[i];
        }
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int sum;
    sumOfPrimeElements(arr, n, &sum);
    printf("Sum of prime elements: %d\n", sum);
    free(arr);
    return 0;
}
