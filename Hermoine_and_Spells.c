#include<stdio.h>
int main ()
{
    int a,b,c;
    int sum;
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
    {
        if (b>c)
        {
            sum=a+b;
        }
        else
        {
            sum=a+c;
        }
    }
    else if (b>c && b>a)
    {
        if (a>c)
        {
            sum=a+b;
        }
        else
        {
            sum=c+b;
        }
    }
    else
    {
        if (b>a)
        {
            sum=c+b;
        }
        else
        {
            sum=c+a;
        }
    }
    printf("%d",sum);
}