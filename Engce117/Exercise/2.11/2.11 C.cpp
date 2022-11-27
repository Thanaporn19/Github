#include <stdio.h>
int main()
{
    int i,j,Sum,Total;
    Sum=0;
    Total=9;
    printf("User Input : ");
    scanf("%d", &j);
    printf("##########\n");
    printf("Series = ");
    for (i = 1; i <= j ; i++)
    {
        Sum = Sum + Total;
        printf("%d", Total);
        if (i <= j - 1)
        {
            printf(" + ");
        } 
        Total = Total * 10 + 9;
    } 
    printf("\n");
    printf("Sum = ");
    printf("%d  ", Sum);
} 
