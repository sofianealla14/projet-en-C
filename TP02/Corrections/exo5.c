/*  exercice pair*/

#include <stdio.h>

int main(){
   int x,y;
   printf("Bonjour ,quelle est la valeur de x ? ");
   scanf("%d",&x);
   printf("Bonjour ,quelle est la valeur de y ? ");
   scanf("%d",&y);
   if (x%2==0 && y%2==0 && x>y)
     {printf("maxi pair %d \n",x);}
   else if (x%2==0 && y%2==0)
     {printf("maxi pair %d \n",y);}
   else if (x%2==0)
     {printf("maxi pair %d \n",x);}
   else if (y%2==0) 
     {printf("maxi pair %d \n",y);}
                  
   // sinon on ne fait rien

   return(1);
}
