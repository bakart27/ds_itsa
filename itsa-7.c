#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cnt, a1, a2, b1, b2;
    char cal[1];
    scanf("%d", &cnt);
    for(int i=0; i<cnt; i++)
    {
        scanf(" %c%d%d%d%d", cal, &a1, &b1, &a2, &b2);
        if(cal[0]=='+')
            printf("%d %d\n", a1+a2, b1+b2);
        if(cal[0]=='-')
            printf("%d %d\n", a1-a2, b1-b2);
        if(cal[0]=='*')
            printf("%d %d\n", a1*a2-b1*b2, b1*a2+a1*b2);
    }
}
