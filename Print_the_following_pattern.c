/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int i, j, N;
    scanf("%d", &N);

    for(i=1; i<=N; i++)
    {
        // Logic to print numbers
        for(j=i; j<=N; j++)
        {
            printf("%d ", j);
        }

        printf("
");
    }
    return 0;
}