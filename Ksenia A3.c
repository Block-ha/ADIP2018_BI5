#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){

    int n, k;
    
    printf("Geben Sie die Zahl ein\n");
    scanf("%i",&n);
    if (n<=0){
        printf("Fehler. Die Zahl ist nicht positiv");
    }
    else if(n==1){
        printf("Fehler. 1 ist keine Primzahl");
    }
    else{
        for(k=2; sqrt(n)>k; k++){
            if(n%k==0){
              printf("%i ist eine Primzahl", n);
                break;
                printf("%i ist keine Primzahl", n);
                break;
            }
            else{
                 printf("%i ist keine Primzahl", n);
                break;
            }
        }
    }

    return 0;
}
