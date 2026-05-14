#include <stdio.h>
#include <unistd.h>


float  moyenne( float x , float y){
    float moy;
    moy=(x+y)/2;
    return moy;
}


int main(){
    printf("x");
    scanf("%f", &x);
    printf("y");
    scanf("%f", &y);
    printf("moyenne = %f", moyenne(x,y));
    return 0;
}