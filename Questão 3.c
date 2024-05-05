#include <stdio.h>

int main() {
int Numcompet, minvagas; 
int notas[1000]; 
int classificados = 0;

  
printf ("Informe o número de competidores: ");
  scanf("%d", &Numcompet);
printf ("Informe o número mínimo de classificados: ");
  scanf("%d", &minvagas);

printf ("Digite a nota de cada competidor: \n");  
for (int x = 0; x < Numcompet; x++) {
  scanf("%d", &notas[x]);
}

for (int x = 0; x < Numcompet; x++) {
  if (notas[x] >= notas[minvagas - 1] && notas[x] > 0) {
    classificados++;
  }
}
printf("O número de competidores classificados será: %d", classificados);

return 0;
}
