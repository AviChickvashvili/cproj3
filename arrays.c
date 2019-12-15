#include <stdio.h>
#include <stdbool.h>
#include "arrays.h"

int avi_arr[LENGTH];
int avi_arr2[LENGTH2];

void shift_element(int *arr, int i)
{

 int index = 1;
    bool ans = true;
    int *p = (int *)(&avi_arr + 1) - 1;
    int temp;
    int temp2;
    // printf("\n*p =%p   %d\n", &p,*p);
    // printf("*arr+i =  %d\n",*(arr+i));
    if ( (arr + i ) > p)
    {
        ans = false;
        printf(ans ? "true" : "false");
        i=-1;
    }
    //   printf("\n rist print  %d    %d",temp , temp2);
    //printf("%p value %d" , &arr2 ,*arr2);
    if(ans==true)
    {
   
     temp = *(arr);
     temp2 = *(arr + 1);
    *arr = *(arr + i) ;
    }

    while (index <= i)
    {

        *(arr + index) = temp;

        temp = temp2;

        index++;

        temp2 = *(arr + index);
        //    printf("\n second print  %d      %d" ,temp , temp2);
    }

}

    void insertion_sort(int *arr , int len)
    {
        int index = 0;
        
        
        //*(arr+i)   when i=0

        
        while(index < len-1)
        {
            if( *(arr+index) > *(arr+index+1)  && index==0)
            {
               // printf("here %d\n"  , index);
                //int *p = *(arr+index+1);
                //int i = arr+index+1;
                shift_element((arr+index) , 1);
                index++;
            }
            //&& index !=0 
            while(*(arr+index) > *(arr+index+1) )
            {

                shift_element((arr+index) , 1);
                index--;
            }
            
            index++;
        }
    }