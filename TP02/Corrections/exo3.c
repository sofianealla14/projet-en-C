/*  exercice inégalité triangulaire*/

#include <stdio.h>

int main(){
   float x,y,z;
   printf("Quelle est la valeur de x ? ");
   scanf("%f",&x);
   printf("Quelle est la valeur de y ? ");
   scanf("%f",&y);
   printf("Quelle est la valeur de y ? ");
   scanf("%f",&z);
   if (x<y+z && y<x+y && z<x+y )
      {printf("ok \n");}
   else 
      {printf("pas possible \n");}
 
 
   return(1);
}
