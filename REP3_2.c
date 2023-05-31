#include <stdio.h>

int main(void)
{
    double height, weight, std_weight;

    printf("체중과 키를 입력하세요:");
    scanf("%lf%lf", &weight, &height);

    std_weight = (height - 100) * 0.9;

    if (std_weight > weight)
        printf("저체중입니다.\n");

    else if (std_weight < weight)
        printf("과체중입니다.\n");
    
    else
        printf("표준체중입니다.\n");

    return 0;
}