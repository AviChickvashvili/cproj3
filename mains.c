#include <stdio.h>
#include <stdbool.h>
#include "arrays.h"

int main()
{

    int speeds[5] = {25, 52, 12, 13};

    int *first = &speeds[0];

    shift_element(first , 3);

    return 0;
}