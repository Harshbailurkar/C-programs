#include<stdio.h>
void printarray(int abc[],int n);

int main(){
    int arr[] = {1,22,322,485,5,6785,7};
    printarray(arr,7);

    return 0;
}
void printarray(int abc[],int n)

{
for(int i=0;i<n;i++)
{
    printf("thr value of elelment %d is %d\n",i+1,abc[i]);
}
}