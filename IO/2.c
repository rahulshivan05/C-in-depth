#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    FILE *fptr = NULL;

    if ((fptr = fopen("rahul.txt", "r")) == NULL)
    {
        printf("Error! opening file");

        exit(1);
    }

    fscanf(fptr, "%d", &num);

    printf("Values of n = %d", num);
    fclose(fptr);

    return 0;
}
