#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, cnt=0;
    scanf("%d", &num);
    for(int i=1; i<=num; i++)
    {
        if((i%3)==0)
            cnt+=i;
    }
    printf("%d\n", cnt);
}
