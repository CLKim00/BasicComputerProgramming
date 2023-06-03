#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("삼각형의 3각을 입력하시오: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b + c > 180)
        printf("삼각형이 아닙니다.");
    else 
        if (a == 90 || b == 90 || c == 90)
            printf("직각 삼각형입니다.");
        else if (a < 90 && b < 90 && c < 90)
            printf("예각 삼각형입니다.");
        else 
            printf("둔각 삼각형입니다.");

    return 0;
}