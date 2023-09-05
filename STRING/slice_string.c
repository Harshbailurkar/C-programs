#include<stdio.h>
#include<string.h>
void sclice(char*ch,int m,int n)
{
    int i=0;
    while(ch[i]=ch[i+m])
    {
        printf("%d\n",i);
        i++;
    }
}
int main()
{ char ch[]="harsh";
 sclice(ch,1,4);
 return 0;
}