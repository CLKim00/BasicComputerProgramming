// 원의 면적과 둘레를 계산하는 프로그램
#include <stdio.h>

int main(void)
{
    float radius;
    float area;
    float round;

    printf("반지름을 입력하시오:");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    round = 3.14 * 2 * radius;

    printf("원의 면적: %f\n", area);
    printf("원의 둘레: %f\n", round);

    return 0;
}