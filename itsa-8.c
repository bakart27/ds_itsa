#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num, cnt=0;
    scanf("%d", &num);
    for(int i=2; i<=num; i++)
    {
        if((num%i)==0)
            cnt++;
    }
    if(cnt==1)
        printf("YES\n");
    else
        printf("NO\n");
}
