#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n1, n2;
    scanf("%d%d", &n1, &n2);
    while(n1!=0 && n2!=0)
    {
        if(n1>n2)
            n1-=n2;
        else
            n2-=n1;
    }
    if(n1>n2)
        printf("%d\n", n1);
    else
        printf("%d\n", n2);
}
