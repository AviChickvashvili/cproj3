#include <stdio.h>
#include <stdbool.h>
#include "arrays.h"

int avi_arr2[LENGTH2];

int main()
{

 printf("enter a number to array ");
    int input = 0;
    int counter = 0;
    
    do
    {
        //    while (scanf("%d", &input) <= 5)
        //     {
        //  printf("enter a number to array ");
        scanf("%d", &input);
        avi_arr2[counter] = input;
       //while (getchar() != '\n')
            ;
        // counter++;
        // }
        counter++;
    } while (counter < LENGTH2);

    for (int i = 0; i < LENGTH2; i++)
    {
        //avi_arr2[i] = LENGTH2 - i;
        printf("%d , ", avi_arr2[i]);
    }
    printf("\n");

    int *P = &avi_arr2[0];
    insertion_sort(P, LENGTH2);

    for (int i = 0; i < LENGTH2; i++)
    {
        printf("%d , ", avi_arr2[i]);
    }
    printf("\n");
    
}