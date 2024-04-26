// Program to insert the element in Array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[10] = {2, 8, 1, 15, 20};
    int item, index;
    printf("Enter the item to be inserted in the Array: ");
    scanf("%d", &item);

    printf("Enter the index or position where item inserted: ");
    scanf("%d", &index);

    // Shifting the
    for (int i = 10 - 1; i >= index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index - 1] = item;

    // Priting the Array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i[arr]);
    }

    return 0;
}
