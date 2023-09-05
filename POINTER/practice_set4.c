#include<stdio.h>
void sumandAvg(int a,int b,int *sum,float*avg);
int main()
{
    int i=2,j=3,sum;
    float avg;
    sumandAvg(i,j,&sum,&avg);
    printf("the value of sum is %d\n",sum);
    printf("the value of avg is %f\n",avg);
    return 0;
}
void sumandAvg(int a,int b,int *sum,float*avg)
{
    *sum=a+b;
     *avg=(float)*sum/2;
}