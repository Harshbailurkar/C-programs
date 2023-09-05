#include<stdio.h>
#include<string.h>
int main()
{ char ch[]="this";
    char ch2[45]="that";
    strcat(ch2,ch);
    printf("now the ch2 is %s",ch2);
    return 0;
}
// here no space bet the output