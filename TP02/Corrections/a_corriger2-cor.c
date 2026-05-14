// programme corrigé

#include <stdio.h>

int main(){
        int a;
        char n[64];
	printf("quel est votre pseudo ?");
	scanf("%s",n);
	printf("bonjour %s ", n);

	printf("quelle est votre annee de naissance ?");
	scanf("%d",&a);
	printf("ah vous avez  %d ans \n", 2018-a);
	printf("au revoir \n");
}
