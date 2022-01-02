#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n;
    scanf("%f", &n);
    int cnt=0;
    while(n>0.0)
    {
        n-=0.238;
        cnt++;
    }
    printf("%d\n", cnt);
}
