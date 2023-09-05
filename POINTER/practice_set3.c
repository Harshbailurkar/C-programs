#include<stdio.h>
void swap(int *a);
int main()
{
    int i;
    printf("enter the number\n");
    scanf("%d\n",&i);
    swap(&i);
    printf("the new no is %d\n",i);
    return 0;
}
void swap(int *a)
{
    int temp;
    temp=*a;
    *a=10*temp;

}
//program to recieve the number 10 time greater than that which is entered.