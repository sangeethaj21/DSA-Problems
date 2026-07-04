#include <stdio.h>

int main()
{
    int a[3][5] = {
        {6,8,7,3,9},
        {5,8,45,67,87},
        {54,689,443,654,3}
    };

    printf("Row total:\n");

    for(int i = 0; i < 3; i++)
    {
        int sum = 0;          

        for(int j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }

        printf("%d\t", sum);
    }

    printf("\n");

    printf("Column total:\n");

    for(int j = 0; j < 5; j++)
    {
        int sum = 0;          
        for(int i = 0; i < 3; i++)
        {
            sum += a[i][j];
        }

        printf("%d\t", sum);
    }

    return 0;
}
