/*  exercice3 */

#include <stdio.h>

/*int main(){
   float a,b;
   printf("recherche de solution ? \n");
 
   printf("Bonjour ,quelle est la valeur de a ? \n");
   scanf("%f",&a);
   printf("Bonjour ,quelle est la valeur de b ? \n");
   scanf("%f",&b);
   if (a==0 && b==0 )
         {printf("tout reel est solution \n");}
   else {if (a==0) 
           {printf ("il n'y a pas de solution \n");}
         else {printf("il ya une solution %f \n", -b/a);};};
 
 return(1);
}*/


// mieux avec else if

int main(){
   float a,b;
   printf("recherche de solution ? \n");
 
   printf("Bonjour ,quelle est la valeur de a ? \n");
   scanf("%f",&a);
   printf("Bonjour ,quelle est la valeur de b ? \n");
   scanf("%f",&b);
   if (a==0 && b==0 )
         {printf("tout reel est solution \n");}
   else if (a==0) 
         {printf ("il n'y a pas de solution \n");}
   else {printf("il ya une solution %f \n", -b/a);};
 
 return(1);
}
