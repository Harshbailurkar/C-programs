#include<stdio.h>
int main()
{
    int i=38;
    int *j=&i;
    
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("thr addresss of i is %u\n",&i);
    printf("thr addresss of i is %u\n",j);
    printf("thr addresss of j is %u\n",&j);
    printf("thr value of j is %u\n",*(&j));
    return 0;
}