#include <stdio.h>

int main(void)
{
    int n, DIGIT_N, x;
    int sum = 0;
    int digit = 0;

    printf("양의 정수를 입력하시오: ");
    scanf("%d", &n);
    DIGIT_N = n;

    while (n > 0){
        digit = n % 10;
        sum += digit;
        printf("n = %10d, digit = %d, sum = %2d\n", n, digit, sum);
        n /= 10;
    }

    printf("\n최종 결과 : n = %d ---> digit sum = %d \n\n", DIGIT_N, sum);

    return 0;
}