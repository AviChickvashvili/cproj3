#include <stdio.h>
#include <stdbool.h>
#include "string2.h"
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void get_line(char s[])
{

    // 'c'
    char te[] = "cat a\nthis is a text file\nlooking for the word cat\nthe program should print also cats\nafter cats crat and lcat are printed\nthe program shouldn't\nprint word caats";

   
    int index = 0;
    int counter = 0;
    char c = te[index];
    int line = 0;
    int col = 0;
    char text[LINE][LINE];
    int i = 0;
    int j = 0;
    

    while (c != EOF)
    {
        j = 0;
        while (j < LINE && c != '\n' && c != EOF)
        {

            text[i][j] = c;
            index++;
            c = te[index];
            // index++;
            j++;
        }
        if (c == '\n')
        {   
            index++;
            c = te[index];
            
        }
        if(col<j)
        {
            col=j;
        }
        i++;
    }
    line =i;
    //printing the text
    // for (int p = 0; p < i; p++)
    // {
    //     for (int l = 0; l < j; l++)
    //     {
    //         printf("%c", text[p][l]);
    //     }
    //     printf("\n");
    // }

    int count = 0;
    int count2 = 0;
    bool ans = true;
    //count = first index
    //
    while (text[0][count] == ' ')
    {
        count++;
    }
    count2 = count;
    while (text[0][count2] != ' ')
    {
        count2++;
    }
    //sub string of word
    int size = count2 - count;
    // printf("******* %d *******", size);
    char search[size + 1];
    memcpy(search, &text[0][count], size);
    search[size + 1] = '\0';
    printf("\nthe word we search is : %s    size %d\n", search,size);
    printf("first index:%d   2nd index:%d\n", count, count2);
    //substring of operation
    while (text[0][count2] == ' ')
    {
        count2++;
    }

    // printf("**********%d*****", size);
    char oper = text[0][count2];
    // oper // search // size
    if (oper == 'a')
    {
        int oppppp = 0;

        printf("Opration : %c      line: %d        col: %d\n\n", oper, line, col);
        // printf("%s\n", text[3]);

        for (int x = 0; x < line; x++)
        {
            for (int z = 0; z < col && text[x][z] !='\0'; z++)
            {
                int cc = 0;
                int coun = 0;
                if (text[x][z] == search[0])
                {
                    cc++;
                    coun++;
                    z++;

                    while (text[x][z] == search[cc] && search[cc]!='\0')
                    {
                        cc++;
                        z++;
                        coun++;
                    }
                    if (coun == size)
                    {
                        oppppp++;
                        for (int trx = 0; trx < col && text[x][trx]!='\0' ; trx++)
                        {
                            printf("%c", text[x][trx]);
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    else if (oper == 'b')
    {
        int max = size + 1;
        int start = 0;
        int def = 0;
        int end;
        for (int i = 0; i < line; i++)
        {
            for (int j = 0; i < col; i++)
            {
                start = j;
                bool ans = true;
                while (text[i][start] != ' ' && ans)
                {
                    end++;
                    start++;

                    if (start > max)
                    {
                        ans = false;
                    }
                }
                if (start == size)
                {
                    bool check = true;
                    //j >>> end
                    for (int g = j; g < end && check; g++)
                    {
                        printf("\nimhere");
                        for (int g = j; g < end && check; g++)
                        {
                            printf("%c", text[i][g]);
                        }
                        int cc = 0;
                        if (text[i][g] != search[cc])
                        {
                            check = false;
                        }
                    }

                    for (int g = j; g < end && check; g++)
                    {
                        printf("%c", text[i][g]);
                    }
                    printf("\n");
                }
                else if (start == max)
                {
                    for (int g = j; g < end; g++)
                    {
                        printf("%c", text[i][g]);
                    }
                    printf("\nimhere");
                    //j >>> end
                    for (int g = j; g < end; g++)
                    {

                        int cc = 0;
                        if (text[i][g] != search[cc])
                        {
                            start--;
                        }
                    }

                    if (start >= max - 1)
                    {
                        for (int g = j; g < end; g++)
                        {
                            printf("%c", text[i][g]);
                        }
                        printf("\n");
                    }
                }
            }
        }
    }
    else
    {
        printf("\noperation : %c is invalid\n", oper);
    }
}