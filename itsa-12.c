#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int f(int k)
{
    if(k==0 || k==1)
        return k+1;
    else
    {
        return f(k-1)+f(k/2);
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", f(num));
}
