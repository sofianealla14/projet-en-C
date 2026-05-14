// ce programme ne fonctionne pas. A vous de le corriger

#include <stdio.h>

int main(){

	int a;
	char n;

	printf("quel est votre pseudo ?");
	scanf("%s",n);

	printf("quelle est votre annee de naissance ?");
	scanf("%d",a);

	printf("Bonjour %s", n);
	printf("Ah vous avez %d ", 2018 - a, "ans");
	printf("Au revoir");
}
