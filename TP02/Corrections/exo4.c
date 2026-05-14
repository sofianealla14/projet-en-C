/*  exercice maxi de 3*/

#include <stdio.h>

int main(){
   float x,y,z,maxi ;
   printf("Quelle est la valeur de x ? ");
   scanf("%f",&x);
   printf("Quelle est la valeur de y ? ");
   scanf("%f",&y);
   printf("Quelle est la valeur de y ? ");
   scanf("%f",&z);
   if (x>y && x>z) 
      {maxi=x;}
   else if (y>x && y>z) 
      {maxi=y;}
   else  
      {maxi=z;}
  {printf("le maxi est %f \n",maxi);}
 
 
   return(1);
}
