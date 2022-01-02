#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int n, a1, a2, a3;
    scanf("%d,%d,%d,%d", &n, &a1, &a2, &a3);
    n-=15*a1+20*a2+30*a3;
    int cal_1=0, cal_5=0, cal_50=0;
    if(n<0)
        printf("0\n");
    else if(n==0)
        printf("0,0,0\n");
    else if(n>0)
    {
        if((n/50)!=0)
        {
            cal_50+=n/50;
            n-=50*cal_50;
        }
        if((n/5)!=0)
        {
            cal_5+=n/5;
            n-=5*cal_5;
        }
        if(n!=0)
        {
            cal_1+=n;
        }
        printf("%d,%d,%d\n", cal_1, cal_5, cal_50);
    }
}
