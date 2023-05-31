#include <stdio.h>

int main(void)
{
    int x, y;

    printf("정수를 입력하시오:");
    scanf("%d", &x);
    printf("정수를 입력하시오:");
    scanf("%d", &y);

    if (x % y == 0)
        printf("%d는 %d의 약수입니다.\n", y, x);
    else
        printf("%d는 %d의 약수가 아닙니다.\n", y, x);

return 0;
}