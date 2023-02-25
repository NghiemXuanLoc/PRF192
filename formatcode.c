#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/// swap 2 so khong can bien trung gian

int main()
{
    int i, size;
    srand(time(NULL));
    printf("\nEnter the size of arr: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        arr[i] = rand() % 101 - rand() % 50;
    }
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    int pos1, pos2;
    printf("\nEnter the 2 position to swap: ");
    scanf("%d%d", &pos1, &pos2);
    if (pos1 >= 0 && pos1 < size && pos2 >= 0 && pos2 < size && pos1 != pos2)
    {
        int temp = arr[pos1];
        arr[pos1] = arr[pos2];
        arr[pos2] = temp;
        printf("\nThe arraya after swappong : ");
        for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
    }
    else
    {
        printf("\nCan not swap 2 element (out of range)");
        printf("\nThe originn array: ");
        for (i = 0; i < size; i++)
            printf("%d ", arr[i]);
    }
    return 0;
}