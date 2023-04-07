#include <stdio.h>
#include <stdlib.h>

//Affichage

//Permet d'afficher les couleurs
void Color(int colorInput, int colorBack) {
    printf("\033[%d;%dm", colorInput, colorBack);
}

//Affiche la grille
void afficher_Grille() {
    // Effacer la console
    system("cls");

    // afficher la grille
    for (int i = 0; i < size_x; i++) {
        for (int j = 0; j < size_y; j++) {
            if (i == x && j == y) {
                Color(34, 47);
                printf("X");
                Color(0, 49); // X (position actuelle du joueur) avec la couleur de la case + le fond en blanc
            } else if (grid[i][j] == 0) {
                Color(34, 49);
                printf("X");
                Color(0, 49); // X/0 en bleu
            } else if (grid[i][j] == 1) {
                Color(33, 49); //1 en jaune
                printf("1");
                Color(0, 49);
            } else if (grid[i][j] == 2) {
                Color(32, 49); //2 en vert
                printf("2");
                Color(0, 49);
            } else if (grid[i][j] == 3) {
                Color(35, 49); //3 en violet
                printf("3");
                Color(0, 49);
            } else if (grid[i][j] == 4) {
                Color(31, 49); //4 en rouge
                printf("4");
                Color(0, 49);
            } else if (grid[i][j] == 5) {
                Color(35, 49); //4 en rouge
                printf("5");
                Color(0, 49);
            } else if (grid[i][j] == 6) {
                Color(36, 49); //4 en rouge
                printf("6");
                Color(0, 49);
            } else if (grid[i][j] == 7) {
                Color(31, 49); //4 en rouge
                printf("7");
                Color(0, 49);
            } else if (grid[i][j] == 8) {
                Color(34, 49); //4 en rouge
                printf("8");
                Color(0, 49);
            } else if (grid[i][j] == 9) {
                Color(30, 49); //9 (Case vide )en noir
                printf(" ");
                Color(0, 49);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}

//Affiche le nombre de cases restantes quand toute celle d'avant on était vidé
void affiche_Case(){
    if (cases_restantes1 > 0){
        printf("\nNombre de cases (1) restantes : %d\n", cases_restantes1);
    } else if (cases_restantes2 > 0){
        printf("\nNombre de cases (2) restantes : %d\n", cases_restantes2);
    } else if (cases_restantes3 > 0){
        printf("\nNombre de cases (3) restantes : %d\n", cases_restantes3);
    } else if (cases_restantes4 > 0) {
        printf("\nNombre de cases (4) restantes : %d\n", cases_restantes4);
    } else if (cases_restantes5 > 0){
        printf("\nNombre de cases (5) restantes : %d\n", cases_restantes5);
    } else if (cases_restantes6 > 0){
        printf("\nNombre de cases (6) restantes : %d\n", cases_restantes6);
    } else if (cases_restantes7 > 0) {
        printf("\nNombre de cases (7) restantes : %d\n", cases_restantes7);
    } else if (cases_restantes8 > 0) {
        printf("\nNombre de cases (8) restantes : %d\n", cases_restantes8);
    }
}