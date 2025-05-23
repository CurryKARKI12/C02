#include <stdio.h>

int main() {
    int nombre = 0;
    int i = 1;

    scanf("%d", &nombre);//scanf permet de lire l'entrée de lutilisateur tel un scanner qui scanne un document 
    
    if (nombre < 0) {
        printf("Erreur.\n");
        return 1;

    } else {
        int fact = 1; //Initialiser la variable fact a 1
        while (i <= nombre) {
            fact *= i; //Multiplier fact par i
            i++; //incrémenter i 
        }
        printf("le factoriel de %d est : %d\n", nombre, fact);
        }
        
     return 0;
}
//il sagit dun programme qui lit un nombre entier et affiche son factoriel  