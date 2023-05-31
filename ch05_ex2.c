#include <stdio.h>

int main(void)
{
    char ch;
    printf("문자를 입력하시오:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("\n%c는 대문자입니다.\n", ch);
        printf("소문자 변환 -> %c.\n", ch + 0x20);
    }

    else if (ch >= 'a' && ch <= 'z')
    {
        printf("\n%c는 소문자입니다.\n", ch);
        printf("대문자 변환 -> %c.\n", ch - 32);
    }

    else 
        printf("\n%c는 기타문자입니다.\n", ch);

    return 0;
}