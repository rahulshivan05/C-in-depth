// Pointers to Array

#include <stdio.h>

int main(int argc, char const *argv[])
{
    // int num = 0;
    // printf("Enter the number.\n");
    // scanf("%d", &num);
    int a[] = {2, 3, 5, 6, 7};
    // printf("%d\n", a);     // gives the address of first element in the Array
    // printf("%d\n", &a[0]); // give the address above
    // printf("%d\n", a[0]);  // value of first element in the Array
    // printf("%d\n", *a);    // gives the same above

    for (int i = 0; i < 5; i++)
    {
        printf("Address = %d\n", &a[i]);
        printf("Address = %d\n", a + i);
        printf("Address = %d\n", a[i]);
        printf("Address = %d\n", *(a + i));
        printf("\n\n");
    }

    return 0;
}
