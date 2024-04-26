#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int num = 0;

    char name[20];
    printf("Enter the file name: ");
    scanf("%s", &name);
    strcat(name, ".txt"); // con-codinate file with .txt

    FILE *fptr = NULL; // creating pointer to file

    fptr = fopen(name, "w");

    if (fptr == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter Num: ");
    scanf("%d", &num);

    fprintf(fptr, "%d", num);
    fclose(fptr);

    return 0;
}
