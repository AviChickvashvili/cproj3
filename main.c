#include <stdio.h>
#include <stdbool.h>
#include "arrays.h"

int main()
{

    int speeds[] = {25, 52, 12, 13};

    // printf("%p  \n" ,&speeds[0] );
    // printf("%p" ,speeds );

    int *start1 = &speeds[0];
    int *start2 = &speeds;

    printf("index 0 is - : %p \n", &speeds);
    printf("index 0 value in HEX is :%p in BIN is :%d \n", *speeds , *speeds);

    printf("index 0 is - : %p \n", &speeds[0]);

    printf("index 0 is - : %p \n", &start1);
    printf("index 0 value in HEX is :%p in BIN is :%d \n", *start1 , *start1);
   
    printf("index 0 is - : %p \n", &start2);
    printf("index 0 value in HEX is :%p in BIN is :%d \n", *start2,*start2);
}