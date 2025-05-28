#include <stdio.h>

int main() {
    int a , b;

    scanf("%d %d", &a, &b);// lire lentrée de lutilisateur 
// Inversion sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Après échange: a = %d, b = %d\n", a, b);
    return 0;
}
// créez un programme qui lit deux entiers et les échanges sans utiliser de variablle
