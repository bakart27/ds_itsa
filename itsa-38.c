#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);
    float cal=0, cal_summer=0;
    if(num>120)
    {
        cal+=2.1*120;
        cal_summer+=2.1*120;
        if(num>330)
        {
            cal+=2.68*210;
            cal_summer+=3.02*210;
            if(num>500)
            {
                cal+=3.61*170;
                cal_summer+=4.39*170;
                if(num>700)
                {
                    cal+=4.01*200;
                    cal_summer+=4.97*200;
                    cal+=4.50*(num-700);
                    cal_summer+=5.63*(num-700);
                }
                else if(num<=700)
                {
                    cal+=4.01*(num-500);
                    cal_summer+=4.97*(num-500);
                }
            }
            else if(num<=500)
            {
                cal+=3.61*(num-330);
                cal_summer+=4.39*(num-330);
            }
        }
        else if(num<=330)
        {
            cal+=2.68*(num-120);
            cal_summer+=3.02*(num-120);
        }
    }
    else if(num<=120)
    {
        cal+=2.1*num;
        cal_summer+=2.1*num;
    }
    printf("Summer months:%.2f\nNon-Summer months:%.2f\n", cal_summer, cal);
}
