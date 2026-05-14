/* ccalcul du PGCD de a et b */

#include <stdio.h>

int main(){
	int a,b,r,pgcd;

	printf("Entrez deux entiers a et b : ");
	scanf("%d %d",&a, &b);
	
	/* à vous de compléter le reste !*/
	r = a % b;
	a = b;
	b = r;

	pgcd = r;

	printf("Le PGCD est : %d \n",pgcd);

}
