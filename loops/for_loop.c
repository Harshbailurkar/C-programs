#include<stdio.h>
int main()
{
    int a;
    printf("how maney numbers do you want to print??\n");
    scanf("%d",&a);

    for (int i=a; i>0; i--)
    {
         printf("the value ofa is %d\n",i);
        if(i==25)
        {
            break;
        }
    }
    
    return 0;
}