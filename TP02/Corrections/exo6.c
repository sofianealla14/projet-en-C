/*  exercice  equation*/

#include <stdio.h>
#include <math.h>

int main(){
    printf ("resolution de ax2+bx+c=0\n");
    float a,b,c,delta,x,y;
    printf("Quelle est la valeur de a ? ");
    scanf("%f",&a);
    printf("Quelle est la valeur de b ? ");
    scanf("%f",&b);
    printf("Quelle est la valeur de c ? ");
    scanf("%f",&c);
    delta=b*b-4*a*c;
    printf("l'équation %fx2+%fx+%f=0 ", a, b, c);
    if (delta<0) 
        {printf("n'a pas de solution \n");}
    else if (delta ==0) 
        {printf(" admet une solution double %f\n", -b/(2*a));}
    else  
        {x= (-b+ sqrt(delta))/(2*a); 
         y = (-b- sqrt(delta))/(2*a);
         printf(" admet deux solutions %f et %f \n",x,y);}

 
 
    return(1);
}

// attention il faut rajouter -lm à la fin de la ligne de compilation
