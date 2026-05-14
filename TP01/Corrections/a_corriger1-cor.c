//programme sans erreurs 

#include <stdio.h>

int main(){
    printf("je suis un programme en langage C pour faire un calcul \n");

    int x;
    int y;
    
   
    printf("Quelle est la valeur de l'entier x ? ");
    scanf("%d", &x);
    printf("Quelle est la valeur de l'entier y ? ");
    scanf("%d", &y);
    int som=x+y;
    
    printf("la valeur de la somme est %d \n ",som);
  

 return(1);
}
