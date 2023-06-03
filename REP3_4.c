#include <stdio.h>

int main(void)
{
    int x, y, z, max;

    printf("정수 1 입력 : ");   scanf("%d", &x);
    printf("정수 2 입력 : ");   scanf("%d", &y);
    printf("정수 3 입력 : ");   scanf("%d", &z);

    if (x > y)
        if (x > z)
            max = x;
        else
            max = z;
    else
        if (z > y)
            max = z;
        else
            max = y;

    printf("입력한 정수 중에서 가장 큰 수는 %d입니다.\n", max);

    return 0; 
}