#include <stdio.h>

unsigned long long reverseNumber(unsigned long long n, unsigned long long reversed) {
    if (n == 0) return reversed;
    return reverseNumber(n / 10, reversed * 10 + n % 10);
}

int main() {
    unsigned long long n;
    printf("Informe um numero natural maior que 0: ");
    scanf("%llu", &n);
    
    printf("%llu\n", reverseNumber(n, 0));
    
    return 0;
}
