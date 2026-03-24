#include <stdio.h>
#include "fonctions.h"

void Hello() {
	printf("Fonction bien appelée \n Hello World ! \n");
}

void compare(int a, int b) {
	if (a < b) {
		printf("%d est plus petit que %d \n", a, b);
	}
	else if (b > a) {
		printf("%d est plus grand que %d \n", a, b);
	}
	else {
		printf("A et B sont égales \n");
	}
}

void compte(int a) {
	int i;
	printf("(");
	for (i = 1; i <= a; i++) {
		printf("%d", i); 
		if (i < a) printf(",");
	}
	printf(")\n");
}

void comptewhile(int a) {
	int i = 1;
	printf("(");
	while (i <= a) {
		printf("%d", i); 
		if (i < a) printf(",");
		i++;
	}
	printf(")\n");
}

void affiche_memoire(int a) {
	int var = a;

	printf("Valeur de la variable : %d\n", var);
	printf("Adresse memoire : %p\n", (void*)&var);
}

void sum(int a, int b) {
	int sum = a + b;
	printf("Somme de %d et %d : %d\n", a, b, sum);
}

void cherche(int cible, int tableau[], int taille) {
	int trouve = 0; // 0 faux 1 vrai 

	for (int i = 0; i < taille; i++) {
		if (tableau[i] == cible) {
			printf("%d trouvé à l'index %d\n", cible, i);
			trouve = 1;
			break;
		}
	}
	if (!trouve) {
		printf("%d n'est pas dans la liste\n", cible);
	}
}

