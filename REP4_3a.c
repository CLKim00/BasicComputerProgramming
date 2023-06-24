#include <stdio.h>

int main(void)
{
    int n, x;
    int sum = 0;
    int digit = 0;

    printf("4자리 정수를 입력하시오: ");
    scanf("%d", &n);

    for (x = 0; x < 4; x++){
        digit = n % 10;
        sum += digit;
        printf("n = %4d, digit = %d, sum = %d\n", n, digit, sum);
        n /= 10;
    }

    printf("\n최종 결과 : n = %4d, digit = %d, sum = %d \n\n", n, digit, sum);

    return 0;
}