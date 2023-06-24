#include <stdio.h>

int main(void)
{
    int num = 1000;
    int sum = 0;

    for (int i = 0; i < num; i++){
        if ((i % 3 == 0) || (i % 5 == 0)){
            printf("sum <= %d + %d\n", sum, i);
            sum = sum + i;
        }
    }
    printf("\n1부터 %d미만의 3또는 5의 배수의 합은 %d 입니다\n", num, sum);
    return 0;
}