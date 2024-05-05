#include <stdio.h>

char repetir, S, N;
int quantprod, x, reais, centavos, reaisint, quantmoedas, quantnotas;
float valor, media, custototal, totalquantprod;
float moedas[1] = {1};
int notas[6] = {100, 50, 20, 10, 5, 2};

int main(void) {
  
do {
do {
  printf ("Informe a quantidade de um produto: ");
    scanf ("%d", &quantprod);
      if (quantprod <= 0)
          break;

printf ("Informe o valor unitário do produto: ");
   scanf ("%f", &valor);

custototal += quantprod * valor;
totalquantprod += quantprod;

} while (quantprod > 0);

media = custototal/totalquantprod;

printf ("\nVALOR TOTAL DA COMPRA: R$%0.2f, MÉDIA: %0.2f\n\n", custototal, media);

reais = custototal;
reaisint = custototal * 100;
centavos = reaisint % 100;
  
printf ("Sua compra equivale a %d reais e %d centavos.\n\n", reais, centavos);  

printf("%0.2f reais equivalem a: \n");
  
for (x = 0; x < 6 ; x++) {
  quantnotas = reais / notas[x];
    if (quantnotas > 0) {
        printf("%d NOTA(S) DE R$ %d\n", quantnotas, notas[x]);
          reais %= notas[x];
      }  
}

for (x =0; x < 1; x++) {
  quantmoedas = centavos / moedas[x];
    if (quantmoedas > 0) {
       printf ("%d MOEDA(S) DE %d", quantmoedas, moedas[1]/100);
      
    }
}
  
printf ("\nReiniciar o programa? (S ou N): ");
  scanf ("%s", &repetir);
    if (repetir == 'N')
        break;

} while (repetir == 'S');
  
return 0;
 }