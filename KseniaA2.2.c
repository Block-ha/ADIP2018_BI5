#include <stdio.h>

int main (){
  unsigned int n;
  unsigned int i = 1;
  unsigned int summe = 0;
  unsigned int q = 1;

  scanf ("%i", &n);
  
  while (i<=n){
      q=i*i;
      summe = summe+q;
      i++;
    }

  printf ("%i", summe); 
  return 0;
}