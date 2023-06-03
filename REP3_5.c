#include <stdio.h>

int main(void)
{
    int month, days;
    int year, isLeapYear;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    printf("마지막 일수를 알고 싶은 달을 입력하시오: ");
    scanf("%d", &month);

    if ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0)
        isLeapYear = 1;
    else    
        isLeapYear = 0;

    switch (month)
    {
        case 2:
            if (isLeapYear == 1)
                days = 29;
            else    
                days = 28;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        default:
            days = 31;
            break;
    }
    printf("\n%d년 %d월의 마지막날은 %d일 입니다.\n\n", year, month, days);

    return 0;
}