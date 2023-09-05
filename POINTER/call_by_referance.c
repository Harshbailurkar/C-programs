#include<stdio.h>
int swap(int *a,int *b);
int main()
{
     int x=4,y=3;
     printf("the value of x and y is %d and %d\n",x,y);
     swap(&x,&y);
     printf("the value of x and y is %d and %d\n",x,y);
    return 0;
}
int swap(int *a,int *b)
{
 int temp;
 temp=*a;
 *a=*b;
* b=temp;

}