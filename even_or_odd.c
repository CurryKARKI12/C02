#include <stdio.h>

int main() {
    int nombre = 0;

    scanf("%d", &nombre);//permet de lire l'entree de l'utilisateur et la stock dans la variable nombre
    if ( nombre % 2 == 0 ) {
    
        printf("%d est pair.\n", nombre);
    } else {

        printf("%d est impair.\n", nombre);
    }
    return 0;
}