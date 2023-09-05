#include<stdio.h>
int main()
{
    int i=34;
    int*j=&i;
    int**k=&j;
    int***l=&k;
    printf("thr addresss of i is %u\n",j);
    printf("thr addresss of j is %u\n",k);
    printf("thr addresss of k is %u\n",l);
    return 0;

}