#include<stdio.h>
int main()
{
    char ch[10];
    printf("enter your name  ");
    
    scanf("%s",&ch);
    printf("conferm your name is %s\n",ch);
    gets(ch);
    puts(ch);
    return 0;
}