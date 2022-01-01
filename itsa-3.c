#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int x, y, cnt;
    scanf("%d%d", &x, &y);
    cnt=pow(x, 2)+pow(y, 2);
    if(cnt<=10000)
        printf("inside\n");
    else
        printf("outside\n");
}
