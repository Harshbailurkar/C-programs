//program to reverse the array element
#include<stdio.h>
int reverse(int *arr,int n);
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7);
          
    return 0;
}
int reverse(int *arr,int n)   
{
    
for ( int i = 0; i <(n/2); i++)
{
    int temp;
    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
}
for (int i = 0; i < 7; i++)
    {
        printf("the value of %d elelment is :%d\n",i+1,arr[i]);
    }

}
