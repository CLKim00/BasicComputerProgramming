#include <stdio.h>

int main(void)
{
    printf("1부터 10까지 자연수에 대해 \"합의 제곱\"과 \"제곱의 합\"의 차이는 2640입니다.\n");

    int num = 100;
    int sum1, sum2;
    int result;

    for (int i = 1; i <= num; i++){
        sum1 += i;
        sum2 += i*i;
    }

    result = sum1*sum1 + sum2;

    printf("1부터 100까지 자연수에 대해 \"합의 제곱\"과 \"제곱의 합\"의 차이는 %d 입니다.\n", result);
    
    return 0;
}