#include <stdio.h>

int main()
{
    /*
    // n is an array of 5 integers
    int n[5];
    int i, j;
    // initilize elements of array n to 0
    for (i = 0; i < 5; i++)
    {
        // set elements at location i to i+100
        n[i] = i + 100;
    }

    // output each array element's value
    for (j = 0; j < 5; j++)
    {
        printf("Element [%d] = %d\n", j, n[j]);
    }
    */

    /*
     // 2D Array

     // An Array with 5 rows and 2 column
     int a[5][2] = {}; // initilize the 2D-Array by 0

     // output each array element's value
     for (int i = 0; i < 5; i++)
     {
         for (int j = 0; j < 2; j++)
         {
             printf("a[%d][%d] = %d\n", i, j, a[i][j]);
         }
     }
    */

    // Passing Array as a function argument
    //  way-1. passinng pointer point to Array
    //  Way-2. passed array and size like (array[10])
    //  Way-3. passing blank array like (array[])

    // In here. i am getAverage
    double getAverage(int arr[], int size)
    {
        double avg, sum;

        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        avg = sum / size;

        return avg;
    }

    // an int array with 5 elements
    int balance[] = {1000, 2, 3, 17, 50};
    double avg;

    // pass pointer to the array as an argument
    avg = getAverage(balance, 5);

    // Output the returned value
    printf("Average value is: %f", avg);

    return 0;
}