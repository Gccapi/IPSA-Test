#include <stdio.h>
#include "fonctions.h"
int main() {
	printf("Début du programme \n");
//	Hello(); //appel fonction
/*	int a = 12;
	int b = 5;
	printf("Comparaison de %d et %d :\n", a, b);
	compare(a, b);
*/
//	int a = 10;
//	compte(a);

//	comptewhile(a);

//	affiche_memoire(a);

/*	int b = 42;
	sum(a, b);
*/

	int données[6] = {4, 8, 74, 23, 56, 2};
	int cible = 23;
	cherche(23, données, 6);


	return 0;
}

