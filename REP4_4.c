#include <stdio.h>

int main(void)
{
    int a, b, c;

    for (a = 1; a < 1000; a++){
        for (b = a+1; b < 1000; b++){
            for (c = b+1; c < 1000; c++){
                if ((a * a + b * b == c * c) && (a + b + c == 1000)){
                    printf("%3d + %3d + %3d = %d\n", a, b, c, a + b + c);
                    printf("%3d x %3d x %3d = %d\n", a, b, c, a * b * c);
                }
            }
        }
    }
    return 0;
}