#ifndef _string3_h_
#define  _string3_h_

#define LINE 256 
#define WORD 30

void print_lines(char *str);

void print_similar_words(char *str);

void get_line(char s[]);

int getword(char w[]);

int substring(char *str1 , char *str2);

int similar(char *s , char *t , int n);

#endif