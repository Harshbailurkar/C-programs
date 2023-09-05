#include<stdio.h>
int main()
{
    int a=10;
    int *j;
       j=&a;
    printf("the address of the variable is %u\n",&a);
    printf("the value of a is %d\n",*j);
   

    return 0; 
}