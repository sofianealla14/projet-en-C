#inc#include <stdio.h>

/* Ecrivez votre programme ci-dessous.
    Cliquez sur Save, puis testez en cliquant sur Run (la fusée).
    Une fois que vous etes satisfait, cliquez sur Evaluate (la case avec un Tick) */
    
    
//Ecrire votre fonction facto ci-dessous :


int facto(int n){
    int a=1;
    int x=n;
    int v=n;
    while(a!=n){
        v=v-1;
        x=x*v;
        a=a+1;
    }
    return x;
}


//Ne mettez pas de fonction "main", elle sera automatiquement ajoutée !
