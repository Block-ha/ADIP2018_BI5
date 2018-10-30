#include <stdio.h>
#include <stdlib.h>

int main (){
  unsigned int n;
  unsigned int i = 1;
  unsigned int summe = 0;
  unsigned int q = 1;
  unsigned int qsumme = 0;
  
  printf ("Geben Sie eine positive Ganzzahl 'n' ein......");
  scanf ("%i", &n);
  
  while (i <= n){
    q=i*i;
    qsumme=qsumme+q;
    summe=summe+i;
    i++;
    }

  printf ("Die Summe der Zahlen von 1 bis n: %i,\nDie Summe der Quadratzahlen von 1 bis n: %i", summe, qsumme); 
  return 0;
}
