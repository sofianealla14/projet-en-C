#include <stdio.h>

/* Ecrivez votre programme ci-dessous.
    Cliquez sur Save, puis testez en cliquant sur Run (la fusée).
    Une fois que vous etes satisfait, cliquez sur Evaluate (la case avec un Tick) */
    
    
//Ecrire votre fonction valeur_absolue ci-dessous :

float valeur_absolue(float x){
    if (x>=0){
        x=x;
    }
    else {
        x=-x;
    }
    return (x);
}

//Ecrire votre fonction bizarre ci-dessous :

float bizarre(float x, float y){
    float a=x-y;
    float b=x+y;
    if (a>=0){
        a=a;
    }
    else{
        a=-a;
    }
    if (b>=0){
        b=b;
    }
    else{
        b=-b;
    }
    float c=a-b;
    if (c>=0){
        c=c;
    }
    else{
        c=-c;
    }
    return (c);
}

//Ne mettez pas de fonction "main", elle sera automatiquement ajoutée !