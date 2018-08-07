#include<stdio.h>
int fibonnaci(int);
int main()
{
    int i, result;
    for(i=0; i<10; i++)
    {
        result = fibonnaci(i);
        printf("%d ",result);
    }
    return 0;
}


int fibonnaci(int n)
{
    if(n == 0)
{
    return 0;
}
if(n == 1)
{
    return 1;
}
    else
{
    return fibonnaci(n-1) + fibonnaci(n-2);
}

}
