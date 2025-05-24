// Description: Ce programme calcule la factorielle d'un nombre entier positif donné par l'utilisateur.
#include <stdio.h> // bibliothèque standard pour scanf et printf

int main() {
    int nombre;

    // Lire un entier au clavier
    scanf("%d", &nombre);

    // Vérifier si le nombre est négatif
    if (nombre < 0) {
        printf("Erreur : le factoriel n'est pas défini pour les nombres négatifs.\n");
        return 1; // quitte le programme avec une erreur
    }

    long factoriel = 1;

    // Boucle pour calculer la factorielle
    for (int i = 1; i <= nombre; i++) {
        factoriel *= i;
    }

    // Affichage du résultat
    printf("Le factoriel de %d est : %ld\n", nombre, factoriel);

    return 0;
}