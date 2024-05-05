#include <stdio.h>
#include <math.h>

int ano;
float valorbem, depre, taxadepre, valordepre, Valor_inicial, Acumulada; // variaveis 
int main(void) {
int ano_depre;

  int i;
  //codigo

printf ("Nome: Manoela D. Muller \n ");
  printf ("N.º 426423 \n\n\n ");

  printf ("Informe o período da depreciação: ");
    scanf ("%d", &ano);

  printf ("Informe o valor do bem: ");
  scanf ("%f", &valorbem);

  printf ("O valor da taxa a ser depreciada vai ser (1.5): ");
  scanf ("%g", &taxadepre);

 printf ("----------------------------------------------------------------\n");

  printf ("\n\nAno\t\tValor do Bem\t\tDepreciação\t\t\tValor Depreciado \n ");

   for (int i = 1 ; i <=ano ; i++) {

    
     
    depre = valorbem*(taxadepre / 100);
    valordepre = valorbem - depre;
     Acumulada += depre;

  printf ("%d\t\t %0.2f \t\t\t %g \t\t\t%0.1f\n",i, valorbem, depre, valordepre);
valorbem = valordepre;
     
 printf ("----------------------------------------------------------------\n");
 
     
   }
  printf ("A depreciação acumulada foi: %f", Acumulada);
return 0;

}

