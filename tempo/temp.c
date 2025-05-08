// Em C é possível determinar que um programa espere um determinado tempo antes de executar o próximo comando

#include <stdio.h>
#include <unistd.h> // Biblioteca no Linux(Contagem em segundos) (Para windows: windows.h(Contagem em milissegundos))

int main() {
  printf("Aguarda 5 segundos.\n");
  sleep(5);
  printf("Finalizado!\n");
  return 0;
}