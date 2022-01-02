#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cal=0;
    for(int i=1; i<=n; i++)
    {
        cal+=i;
        if(i!=n)
            printf("%d + ", i);
        else
            printf("%d = ", i);
    }
    printf("%d\n", cal);
}

