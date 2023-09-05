#include<stdio.h>
int main()
{
    int mul[10];
    int n;
    printf("enter the value of n\n");
    scanf("%d\n",&n);
    for ( int i = 0; i <n; i++)
    {
        mul[i]=n*(i+1);
        printf("%d x %d =%d\n",n,i+1,mul[i]);
    }
    

    return 0;
}