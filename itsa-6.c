#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int month;
    scanf("%d", &month);
    if(month==3 || month==4 || month==5)
        printf("Spring\n");
    else if(month==6 || month==7 || month==8)
        printf("Summer\n");
    else if(month==9 || month==10 || month==11)
        printf("Autumn\n");
    else if(month==12 || month==1 || month==2)
        printf("Winter\n");
}
