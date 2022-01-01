#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char num[50][1024];
    strcpy(num[0], "*****");
    strcpy(num[1], "*   *");
    strcpy(num[2], "*   *");
    strcpy(num[3], "*   *");
    strcpy(num[4], "*****");
    strcpy(num[5], "    *");
    strcpy(num[6], "    *");
    strcpy(num[7], "    *");
    strcpy(num[8], "    *");
    strcpy(num[9], "    *");
    strcpy(num[10], "*****");
    strcpy(num[11], "    *");
    strcpy(num[12], "*****");
    strcpy(num[13], "*    ");
    strcpy(num[14], "*****");
    strcpy(num[15], "*****");
    strcpy(num[16], "    *");
    strcpy(num[17], "*****");
    strcpy(num[18], "    *");
    strcpy(num[19], "*****");
    strcpy(num[20], "*   *");
    strcpy(num[21], "*   *");
    strcpy(num[22], "*****");
    strcpy(num[23], "    *");
    strcpy(num[24], "    *");
    strcpy(num[25], "*****");
    strcpy(num[26], "*    ");
    strcpy(num[27], "*****");
    strcpy(num[28], "    *");
    strcpy(num[29], "*****");
    strcpy(num[30], "*****");
    strcpy(num[31], "*    ");
    strcpy(num[32], "*****");
    strcpy(num[33], "*   *");
    strcpy(num[34], "*****");
    strcpy(num[35], "*****");
    strcpy(num[36], "    *");
    strcpy(num[37], "    *");
    strcpy(num[38], "    *");
    strcpy(num[39], "    *");
    strcpy(num[40], "*****");
    strcpy(num[41], "*   *");
    strcpy(num[42], "*****");
    strcpy(num[43], "*   *");
    strcpy(num[44], "*****");
    strcpy(num[45], "*****");
    strcpy(num[46], "*   *");
    strcpy(num[47], "*****");
    strcpy(num[48], "    *");
    strcpy(num[49], "    *");
    char c[4];
    for(int i=0; i<4; i++)
        scanf("%c", &c[i]);
    for(int j=0; j<5; j++)
    {
        for(int k=0; k<4; k++)
        {
            if(k!=0)
                printf(" ");
            int n=((int)c[k]-48)*5;
            printf("%s", num[n+j]);
        }
        printf("\n");
    }
}
