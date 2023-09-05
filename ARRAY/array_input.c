#include<stdio.h>
int main()
{
    int marks[4];
    // printf("enter value of marks for std 1\n");
    // scanf("%d\n",&marks[0]);
    //     printf("enter value of marks for std 2\n\n");
    // scanf("%d\n",&marks[1]);
    //     printf("enter value of marks for std 3\n");
    // scanf("%d\n",&marks[2]);
    //     printf("enter value of marks for std 4\n");
    // scanf("%d\n",&marks[3]);
    for(int i=0;i<4;i++)
    {
        printf("enter the value of marks %d\n",i+1);
        scanf("%d\n",&marks[i]);
    }
    for (int i = 0; i <4; i++)
    {
        printf("you have entered %d \n",marks[i]);
    }
    
    

    // printf("you have entered %d %d %d %d\n",marks[0],marks[1],marks[2],marks[3]);
    return 0;

}