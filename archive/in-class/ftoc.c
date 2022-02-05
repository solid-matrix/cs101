#include <stdio.h>

int main(int argc, char const *argv[])
{
    float f, c;
    scanf("%f", &f);
    printf("%.2f", (f - 32) / 1.8);
    return 0;
}
