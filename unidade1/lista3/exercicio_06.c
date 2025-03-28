#include <stdio.h>

unsigned long long doubleFactorial(unsigned long long n) {
    if (n <= 1) return 1;
    return n * doubleFactorial(n - 2);
}

int main() {
    unsigned long long n;
    printf("Informe um numero inteiro entre 1 e 100: ");
    scanf("%llu", &n);
    
    printf("%llu\n", doubleFactorial(n));
    
    return 0;
}
