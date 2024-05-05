#include <stdio.h>

int andar[3];
int x, totalminutos, andar_cafeteira;                       
int main(void) {

 
  printf ("Digite quantas pessoas trabalham no primeiro, segundo e terceiro andar respectivamente.\n");

  for (x=0 ; x<3 ; x++) {
  scanf ("%d", &andar[x]);

if (andar[x] < 0) {
    printf ("O número de funcionários deve ser igual ou maior a 0.\n");
          break; }
  else if (andar[x] > 1000) {
     printf ("O número de funcionários deve ser igual ou menor a 1000.\n");
          break; }
}

if (andar[0] > andar[1] & andar[0] > andar[2]){
    printf ("A cafeteira deve ficar no andar 1.\n");
}
if (andar[1] > andar[0] & andar[1] > andar[2]){
    printf ("A cafeteira deve ficar no andar 2.\n");
}
if (andar[2] > andar[1] & andar[2] > andar[0]){
    printf ("A cafeteira deve ficar no andar 3.\n");
}

  
for (x = 0; x<3; x++) {
 totalminutos += andar[x] * 2 * (x != andar_cafeteira);
}
printf ("Total de minutos que levarão para os funcionários pegarem café:%d ", totalminutos);





  

  
  
  
  
  
  
  
  
  
  
  return 0;
}