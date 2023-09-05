#include<stdio.h>
void display();    //.........function prototype
int main()
{
    int a;
    printf("name\n");
    display();        //.........function call
    printf("bye\n");
    return 0;

}
void display()        //..........function definition
{
    printf("hi I am harsh\n");
}