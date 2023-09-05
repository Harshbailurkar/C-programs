#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a=4,b=3;
    printf("the addition of the numbers is %d\n",sum(a,b));
    return 0;
}
int sum(int a,int b)
{
return a+b;
}