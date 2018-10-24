#include <stdio.h>

int main (){
  unsigned int n;
  unsigned int i = 1;
  unsigned int summe = 0;

  scanf ("%i", &n);
  
  while (i <= n){
      summe = summe+i;
      i++;
    }

  printf ("%i", summe); 
  return 0;
}
