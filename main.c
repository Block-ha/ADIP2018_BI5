/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main (){
  unsigned int n;
  int i = 1;
  int summe = 0;

  scanf ("%i", &n);
  while (i <= n)
    {
      summe = summe+i;
      i++;
    }

  printf ("%i", summe); 
  return 0;
}
