/*  exercice livres */

#include <stdio.h>

int main(){
   int x,p;
   printf("Bonjour ,combien de livres ? ");
   scanf("%d",&x);
   if (x<5)
     {p= x* 30;}
   else if (x<25)
     {p= x*25;}
   else 
     {p=x*20;}
   printf("prix total pour les %d livres % d \n", x, p);
                  
 
   return(1);
}
