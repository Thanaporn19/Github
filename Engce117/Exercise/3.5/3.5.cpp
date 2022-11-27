#include <stdio.h>
int main()
{
    int a, i, j, sum;
    int num[100];
    printf("Input number of element to be store in array : ");
    scanf("%d", &a);
    printf("---------------------------------------------------\n");
    for (int i = 0; i < a; i++)
    {
        printf("Element[%d] : ", i + 1);
        scanf("%d", &num[i]);
    } 
    for (int i = 0; i < a; i++)
    {
        sum = 1;
        for (j = i + 1; j <= a - 1; j++)
        {
            if (num[i] == num[j] && num[i] != 0)
            {
                sum++;
                num[j] = 0;
            }
        } 
        if (num[i] != 0)
        {
            printf("%d -> %d\n", num[i], sum);
        } 
    }
} 
