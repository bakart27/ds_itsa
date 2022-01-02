#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int cal_10=0, cal_5=0, cal_1=0;
    if((n/10)!=0)
    {
        cal_10+=n/10;
        n%=10;
    }
    if((n/5)!=0)
    {
        cal_5+=n/5;
        n%=5;
    }
    if(n!=0)
    {
        cal_1+=n;
        n%=1;
    }
    printf("NT10=%d\nNT5=%d\nNT1=%d\n", cal_10, cal_5, cal_1);
}
