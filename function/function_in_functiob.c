#include<stdio.h>
void morning();
void afternoon();
void night();
int main()
{
    morning();
    
    return 0;
}

void morning()
{
    printf("good moring\n");
    afternoon();
 

}
void  afternoon()
{
    printf("good afternoon\n");
       night();
}
void night()
{
    printf("good neight\n");
}