// Program to understand difference between pointer to an integer and pointer to an array of integers

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int *p;       // can point to an integer
    int(*ptr)[5]; // Can point to an array of 5 integers
    int arr[5];

    p = arr; // Points to 0th element of arr

    // got error from below but i donn't know why error occured
    ptr = arr; // Points to the whole array arr

    printf("p = %u,     ptr = %u\n", p, ptr);
    p++;
    ptr++;
    printf("p = %u,     ptr = %u\n", p, ptr);

    return 0;
}
