#include <stdio.h>

int main() {
    int a , b;

    
    scanf("%d %d", &a, &b); // scanf permet de recuperer et de stocker l'entrée de l'utilisateur 
//commencons maintenant l'inversion avec une simple règle mathématique

 a = a + b;
 b = a - b;
 a = a - b;


 printf("Apres echange : a = %d, b = %d", a, b);
 return 0;
}