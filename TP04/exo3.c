/* calcul le nombre de chiffre d'un entier */

#include <stdio.h>

int main(){
	int n,nombre = 0, dix = 10;
	
	printf("Entrez un entier n, je vais calculer le nombre de chiffres qui le compose :");
	scanf("%d",&n);

	/* il va falloir améliorer ce qui suit ! */

	n = n / dix;
	nombre = nombre + 1;

	printf("le résultat est %d \n",nombre);

}