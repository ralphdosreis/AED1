#include <stdio.h>

unsigned long long ackermann(unsigned long long m, unsigned long long n) {
    if (m == 0) return n + 1;
    if (n == 0) return ackermann(m - 1, 1);
    return ackermann(m - 1, ackermann(m, n - 1));
}

int main() {
    unsigned long long m, n;
    printf("Informe os dois numeros naturais para parametros da Funcao de Ackermann: ");
    scanf("%llu %llu", &m, &n);
    
    printf("%llu\n", ackermann(m, n));
    
    return 0;
}
