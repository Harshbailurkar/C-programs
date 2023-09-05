#include<stdio.h>
int main()
{
    int a=34;
    int *ptr=&a;
    printf("the value of ptr is %u\n",ptr);
    ptr++;
    printf("the value of ptr is %u\n",ptr);
    return 0;
}