#include<stdio.h>

struct student{

    int roll;
    char name[20];
    int marks[5];
}stud;

void avg(int arr[]){

    float Tavg;
    float sum= 0;
    for(int i=0;i<5;i++){

        sum+=arr[i];
    }
    Tavg= sum/5;
    printf("The avg of marks is %f", Tavg);
}

void main(){

    printf("enter the marks of 5 subject \n");

    for(int i=0;i<5;i++){

        scanf("%d ", &stud.marks[i]);
    }
    // 
    avg(stud.marks);
}