#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b)!=EOF)
    {
        int cal=a+b;
        printf("%d\n", cal);
    }
}
