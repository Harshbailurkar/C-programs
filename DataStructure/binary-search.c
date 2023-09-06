#include<stdio.h>

int binarysearch(int arr[],int key,int i,int j){
    while(i<=j){
        int mid=(i+j)/2;
        if(key==arr[mid]){
           return mid;
        }
        else if(key<arr[mid]){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
        
    }
    return -1;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=9;
    int key=6;
    int i=0;
    int j=n-1;
   int ans= binarysearch(arr,key,i,j);
   if(ans==-1){
    printf("element is not found");
   }
   else{
    printf("element is found at %d location", ans+1);
   }
   return 0;
}
