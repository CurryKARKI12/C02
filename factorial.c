#include <stdio.h>   //inclure la bibliotheque standard contenant les fichiers permettant d'executer les commmandes standars telles que le scanf et printf

int main() {
    int nombre;
    scanf("%d", &nombre);//scanf permet de lire l'entrée de lutilisateur tel un scanner qui scanne un document,cette entree est ensuite stocker dans la variable %d 
    
    if (nombre < 0) {
        printf("erreur.\n");
        return 1; //retourner 1 si le nombre est inferieur a 0
         long factoriel = 1; //Initialiser la variable fact a 1
        for (int i = 1; i <= nombre; i++) {
            factoriel *= i; //Multiplier fact par i
             //incrémenter i 
        }
        printf("le factoriel de %d est : %ld\n", nombre, factoriel);
        }

     return 0;
}
//il sagit dun programme qui lit un nombre entier et affiche son factoriel  