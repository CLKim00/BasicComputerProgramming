#include <stdio.h>

int main(void)
{
    int n;

    printf("정수를 입력하시오: ");
    scanf("%d", &n);
    
    for (int i = 1; i <= n; i++){
        for (int j = n; j >= i; j--){
            printf("%3d", j);
        }
        printf("\n");
    }
    
}