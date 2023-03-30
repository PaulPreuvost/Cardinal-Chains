#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Color(int colorInput, int colorBack) {
    printf("\033[%d;%dm", colorInput, colorBack);
}

int grid[4][3] = {
    {3, -1, 0},
    {3, 2, 1},
    {3, 2, 2},
    {3, 2, 2}
    };

int create_Board(int grid[4][3], int x, int y) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 0 && j == x && grid[i][j] != -1) {
                Color(33,40); // jaune sur fond noir
                printf("%d ", grid[i][j]);
                Color(0, 0); // réinitialisation de la couleur
            }
            else if (grid[i][j] == 0){
                Color(33,40);
                printf("%d ", grid[i][j]);
                Color(0, 0); // réinitialisation de la couleur
            }
            else if (grid[i][j] == -1) {
                printf("  ");
            }
            else {
                printf("%d ", grid[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
}

void jeu() {
    int x = 2, y = 0; // initialisation des coordonnées
    int continuer = 1;
    while (continuer) {
        create_Board(grid, x, y);
        printf("Choisissez une direction (ZQSD) ou tapez une autre touche pour quitter : ");
        char direction;
        scanf(" %c", &direction);

        // initialisation de la variable de validation
        int valide = 1;

        switch (direction) {
            case 'z':
                if (y < 3) {
                    y += 1;
                } else {
                    printf("Direction impossible : vous avez atteint le haut de la grille.\n");
                    valide = 0;
                }
                break;
            case 's':
                if (y > 0) {
                    y -= 1;
                } else {
                    printf("Direction impossible : vous avez atteint le bas de la grille.\n");
                    valide = 0;
                }
                break;
            case 'd':
                if (x < 3) {
                    x += 1;
                } else {
                    printf("Direction impossible : vous avez atteint le bord droit de la grille.\n");
                    valide = 0;
                }
                break;
            case 'q':
                if (x > 0) {
                    x -= 1;
                } else {
                    printf("Direction impossible : vous avez atteint le bord gauche de la grille.\n");
                    valide = 0;
                }
                break;
            default:
                continuer = 0;
                break;
        }

        // si le déplacement est invalide, on redemande des coordonnées
        if (!valide) {
            printf("Veuillez indiquer une nouvelle direction.\n");
            scanf("%d %d", &x, &y);
        }
    }
}


int main(){
    jeu();
    return 0;
}