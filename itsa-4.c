#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int hr1, hr2, min1, min2, total_hr=0, total_min=0, cnt=0;
    scanf("%d%d%d%d", &hr1, &min1, &hr2, &min2);
    if(min1>min2)
    {
        total_min=(60-min1+min2)/30;
        total_hr=(hr2-hr1-1)*2+total_min;
    }
    else
    {
        total_min=(min2-min1)/30;
        total_hr=(hr2-hr1)*2+total_min;
    }
    for(int i=1; i<=total_hr; i++)
    {
        if(i<=4)
            cnt+=30;
        else if(i<=8)
            cnt+=40;
        else
            cnt+=60;
    }
    printf("%d\n", cnt);
}
