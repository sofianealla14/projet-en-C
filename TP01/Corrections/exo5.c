/*  exercice3 */

#include <stdio.h>

int main(){
   float x,y,maxi;
   printf("Bonjour ,quelle est la valeur de x ? \n");
   scanf("%f",&x);
   printf("Bonjour ,quelle est la valeur de y ? \n");
   scanf("%f",&y);
   if (x>y)
        {maxi=x;}
   else 
        {maxi=y;}
   printf("le maximum de  %f et  %f  est %f \n",x,y,maxi);
   return(1);
}   
