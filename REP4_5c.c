#include <stdio.h>

int main(void)
{
    int r, c, n;

    printf("[REP4_5c] --------------------\n\n");

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    
    for (r = 1; r <= n; r++){
        for (c = 1; c <= n; c++)
            printf("%3d", c);
        
        printf("\n");
    }
    printf("------------------------\n\n");

    for (r = 1; r <= n; r++){
        for (c = 1; c <= r; c++){
            printf("%3d", c);
        }
        printf("\n");
    }
}