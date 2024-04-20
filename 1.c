#include <stdio.h>
void createArray(int arr[], int n)
{
    printf("Enter elements of the array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void insertElement(int arr[], int *n, int element, int position)
{
    if (position < 0 || position > *n)
    {
        printf("Invalid position!\n");
        return;
    }
    for (int i = *n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*n)++;
    printf("Element inserted\n");
}
void deleteElement(int arr[], int *n, int position)
{
    if (position < 0 || position >= *n)
    {
        printf("Invalid position!\n");
        return;
    }
    for (int i = position; i < *n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*n)--;
    printf("Element deleted\n");
}
int linearSearch(int arr[], int n, int element)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int binarySearch(int arr[], int n, int element)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter size n: ");
    scanf("%d", &n);
    int array[100];
    createArray(array, n);
    while (1)
    {
        printf("**MENU**\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Linear Search\n");
        printf("4. Binary Search\n");
        printf("5. Display\n");
        printf("Enter option: ");
        int option;
        scanf("%d", &option);
        switch (option)
        {
        case 1:
        {
            int element, position;
            printf("Element to insert: ");
            scanf("%d", &element);
            printf("Enter Position: ");
            scanf("%d", &position);
            insertElement(array, &n, element, position);
        }
        break;
        case 2:
        {
            int position;
            printf("Enter Position to delete: ");
            scanf("%d", &position);
            deleteElement(array, &n, position);
        }
        break;
        case 3:
        {
            int element;
            printf("Element to search for: ");
            scanf("%d", &element);
            int index = linearSearch(array, n, element);
            if (index != -1)
            {
                printf("Element found at position %d\n", index);
            }
            else
            {
                printf("Element not found in the array\n");
            }
        }
        break;
        case 4:
        {
            int element;
            printf("Element to search for: ");
            scanf("%d", &element);
            int index = binarySearch(array, n, element);
            if (index != -1)
            {
                printf("Element found at position %d\n", index);
            }
            else
            {
                printf("Element not found in the array\n");
            }
        }
        break;
        case 5:
            displayArray(array, n);
            break;
        default:
            printf("Invalid option! Please try again.\n");
        }
    }
}
