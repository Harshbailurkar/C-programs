#include<stdio.h>
int main()
{   
    int a;
    int age;
    int drink;
    int vippass=1;
    printf("enter the number\n");
    scanf("%d",&a);
    if(a%2==0){
        printf("%d is even\n",a);
    }
    else{
        printf("this is odd number\n");
    }
    printf("enter your age\n");
    scanf("%d",&age);
    if(age>18 && age<70){
        printf("you can drive\n");
    }
    else{
       printf("you cant drive\n"); 
    }
    printf("enter your age:_\n");
    scanf("%d",&age);
        
    if (/* condition */age<=22 || !(vippass==1))
    {
        /* code */printf("you cant drink\n");
    }
    else if (/* condition */ age<30)
    {
        /* code */printf("you can drink beer\n");
    }
    else
    {
        /* code */printf("you can drink\n");
    }
    //one lin if else coperator
    //condition? expression-if true : expresion if false

    (a<25)? printf("you will not allow to marry\n"): printf("will will get married\n");
    

    return 0;
}