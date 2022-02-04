#include <stdio.h>

int main()
{
    printf("Integer Types:\n");
    printf("\tsizeof(char)=%ld\n", sizeof(char));
    printf("\tsizeof(short)=%ld\n", sizeof(short));
    printf("\tsizeof(short int)=%ld\n", sizeof(short int));
    printf("\tsizeof(int)=%ld\n", sizeof(int));
    printf("\tsizeof(long)=%ld\n", sizeof(long));
    printf("\tsizeof(long int)=%ld\n", sizeof(long int));

    printf("Float Types:\n");
    printf("\tsizeof(float)=%ld\n", sizeof(float));
    printf("\tsizeof(double)=%ld\n", sizeof(double));
    printf("\tsizeof(long double)=%ld\n", sizeof(long double));

    
    return 0;
}
