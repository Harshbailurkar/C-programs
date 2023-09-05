#include <stdio.h>
int main()
{
    
    int i=1;
    int n;
    printf("enter the number");
    scanf("%d",&n);


    do
    {
        printf("the value of i is %d\n", i);
        i++;
    } while (i<=n);

    return 0;
}
