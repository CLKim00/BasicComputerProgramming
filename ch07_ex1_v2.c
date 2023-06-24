#include <stdio.h>

int main(void)
{
    int counter, i;
    int cnt = 0;
    
    printf("카운터의 초기값을 입력하시오:");
    scanf("%d", &counter);
    
    for (i = counter; i >= 1; i--){
        printf("%3d ", i);
        cnt++;
        
        if (cnt % 10 == 0)
            printf("\n");
    }

    printf("종료\n\a");

    return 0;
}