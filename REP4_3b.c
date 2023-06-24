#include <stdio.h>

int main(void)
{
    int n, m, x;
    int sum = 0;
    int digit = 0;

    printf("입력할 정수의 자리수를 정하시오 : ");
    scanf("%d", &m);

    printf("%d자리 정수를 입력하시오: ", m);
    scanf("%d", &n);

    for (x = 0; x < m; x++){
        digit = n % 10;
        sum += digit;
        printf("n = %10d, digit = %d, sum = %2d\n", n, digit, sum);
        n /= 10;
    }

    printf("\n최종 결과 : n = %4d, digit = %d, sum = %d \n\n", n, digit, sum);

    return 0;
}