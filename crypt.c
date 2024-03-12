#include <stdio.h>

void cryptageParDecalage(char *chaine, int decalage) {
    for (int i = 0; chaine[i] != '\0'; ++i) {
        // Vérifie si le caractère est une lettre majuscule
        if (chaine[i] >= 'A' && chaine[i] <= 'Z') {
            chaine[i] = (chaine[i] - 'A' + decalage) % 26 + 'A';
        }
        // Vérifie si le caractère est une lettre minuscule
        else if (chaine[i] >= 'a' && chaine[i] <= 'z') {
            chaine[i] = (chaine[i] - 'a' + decalage) % 26 + 'a';
        }
        // Ne fait rien si le caractère n'est pas une lettre
    }
}

int main() {
    char chaine[100];
    int decalage;

    // Demande à l'utilisateur de saisir la chaîne à crypter
    printf("Entrez la chaîne à crypter : ");
    fgets(chaine, sizeof(chaine), stdin);

    // Demande à l'utilisateur de saisir le décalage
    printf("Entrez le décalage pour le cryptage : ");
    scanf("%d", &decalage);

    // Appelle la fonction de cryptage
    cryptageParDecalage(chaine, decalage);

    // Affiche le résultat
    printf("Chaîne cryptée : %s", chaine);

    return 0;
}
