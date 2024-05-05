#include <stdio.h>
#include <stdlib.h>

int senha, numeroconta, inverso, somainversos, mult, ultimodig;
int n1, n2, n3, verificador, a1, a2, a3;

int main(void) {

do {
 printf("Informe o número da sua conta corrente de 4 digitos: ");
  scanf ("%d", &senha);
  if (senha < 1000 || senha > 9999) {
    printf ("Número inválido! Tente novamente.\n");}
}
 while (senha < 1000 || senha > 9999);

numeroconta = senha / 10; 
ultimodig = senha % 10;
  
printf ("\nO número da conta é %d.\n\n", numeroconta);

n1 = numeroconta/100; 
n2 = (numeroconta/10) % 10;
n3 = numeroconta % 10;
  
verificador = senha % 10;

printf ("O último digito é %d.\n\n", ultimodig);

inverso = n3 * 100 + n2 * 10 + n1; // número da conta invertido

somainversos = numeroconta + inverso;

a1 = somainversos/100;
a2 = (somainversos/10) % 10;
a3 = somainversos % 10;

mult = a1 * 1 + a2 * 2 + a3 * 3; // multiplicação dos digitos pela sua posição
verificador = mult % 10; 

if (ultimodig == verificador) {
  printf ("Tudo certo! O seu número verificador é '%d'.", verificador);
} 
else printf ("Ops! O digito verificador '%d' e o último digito da conta não correspondem.\nTente novamente.", verificador);
  return 0;
}