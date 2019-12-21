/**
 * this is a text file
looking for the word cat
the program should print also cats
after cats crat and lcat are printed
the program shouldn't print
the word caats
**/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include "string2.h"
#include <string.h>

int main()
{
   /**
     * program A : Print all the lines cat apperas
     * program B : Print all the similar words
     *
     * '\n'   '\t'   ' ' EOF  '\0'
     * */
    // ans = all the chars recived
    // text = all the text
    char text[LINE];
    char c;
    get_line(text);
    //prints the given text by stdin
    /**substring
     * 
     * char cat[] = "cat and dog";
     * printf("%s\n", cat);
     * char subbuff[5];
     * memcpy( subbuff, &cat[8], 3 );
     * subbuff[3] = '\0';
     * printf("\n%s", subbuff);
     * 
     **/ 
   
    return 0;
}