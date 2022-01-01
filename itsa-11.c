#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int row, column;
    scanf("%d%d", &row, &column);
    int matrix[1024][1024];
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<column; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for(int i=0; i<column; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d", matrix[j][i]);
            if(j!=row-1)
                printf(" ");
            else
                printf("\n");
        }
    }
}
