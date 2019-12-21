#include <stdio.h>
#include <stdbool.h>
#include "arrays.h"
int avi_arr[LENGTH];

int main()
{
    avi_arr[0] = 15;
    avi_arr[1] = 23;
    avi_arr[2] = 2;
    avi_arr[3] = 5;
    avi_arr[4] = 100;
    ///////
    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d , ", avi_arr[i]);
    }
    int i = 2;
    int *p = &avi_arr[0];
     printf("\n");

    shift_element(p, i);

    for (int i = 0; i < LENGTH; i++)
    {
        printf("%d , ", avi_arr[i]);
    }
    printf("\n");
}