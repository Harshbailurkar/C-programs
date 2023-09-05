#include<stdio.h>
void printadd(int a){
    printf("the adress of variable a is %u\n",&a);

}
int main()
{
    int i=4;
    printf("the value of variable is %d\n",i);
    printadd(i);
    printf("the adddress of variable i is %u\n",&i);
    return 0;
}

//here adress of i is different for both