/*  exercice3 */

#include <stdio.h>

int main(){
   float x,y,tmp;
   printf("Bonjour ,quelle est la valeur de x ? \n");
   scanf("%f",&x);
   printf("Bonjour ,quelle est la valeur de y ? \n");
   scanf("%f",&y);
   tmp=x;
   x=y;
   y=tmp;
   printf("maintenant x vaut %f et y vaut %f",x,y);
   return(1);
}
