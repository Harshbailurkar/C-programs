#include<stdio.h>
#include<string.h>
int main()
{ char ch[]="this";
    char ch2[45]="that";
    int val=strcmp(ch2,ch);
    printf("now the val is %d",val);
    return 0;
}
//this function is used to compare the 2 strings