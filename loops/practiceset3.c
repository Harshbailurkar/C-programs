#include<stdio.h>
int main()
{
    float tax=0,income;
    printf("enter your income");
    scanf("%f",&income);

    if(income>=250000 && income<=500000)
{
    tax=0.05*(income-250000);

}
else if (income>500000 && income<1000000)
{
    tax=0.20*(income-500000);
}
printf("your tax is %f\n",tax);

}
