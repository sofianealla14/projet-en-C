/*  exercice3 */

#include <stdio.h>

int main(){
    int s,a;
    printf("calcul d'impots ? \n");
    printf("Bonjour ,quel est votre age (entier) ? \n");
    scanf("%d",&a);
    printf("Bonjour ,êtes vous un homme (1) ou une femme(2)? \n");
    scanf("%d",&s);
    if ((s==1 && a>20)||(s==2 && a>18 && a<35)) 
       {printf ("vous payez des impots \n");}
    else 
       {printf ("vous ne payez pas d'impots \n");};
 
    return(1);
}
