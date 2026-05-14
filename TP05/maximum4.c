#include <stdio.h>

/* Ecrivez votre programme ci-dessous.
    Cliquez sur Save, puis testez en cliquant sur Run (la fusée).
    Une fois que vous etes satisfait, cliquez sur Evaluate (la case avec un Tick) */
    
    
//Ecrire votre fonction maximum ci-dessous :

int maximum(int a, int b){
    int x;
    if (a>b){
        x=a;
    }
    else{
        x=b;
    }
    return x;
}

//Ecrire votre fonction maximum4 ci-dessous :

int maximum4(int a, int b, int c, int d){
    int y,z,max;
    y=maximum(a,b);
    z=maximum(c,d);
    max=maximum(y,z);
    
    return max;
}

//Ne mettez pas de fonction "main", elle sera automatiquement ajoutée !
