#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Color(int coulorInput, int coulorBack) {
    printf("\033[%d;%dm", coulorInput, coulorBack);
}

int rand_Case() {
    return rand() % 3;  // retourner un nombre aléatoire entre 0 et 2
}

int rand_Board_Size() {
    return rand() % 14 + 3;  // retourner un nombre aléatoire entre 3 et 16
}

int case_fence(){
    return rand() % 2;
}

int main() {
    srand(time(NULL));  // initialiser la graine pour rand()

    int size_x, size_y;
    do {
        size_x = rand_Board_Size();
        size_y = rand_Board_Size();
    } while (size_x == size_y);

    int create_Board[size_x][size_y];
    // initialiser le tableau avec des nombres aléatoires entre 0 et 2
    for (int i = 0; i < size_x; i++) {
        for (int j = 0; j < size_y; j++) {
            create_Board[i][j] = rand_Case();
        }
    }
    // afficher le tableau
    for (int i = 0; i < size_x; i++) {
        if (case_fence() == 1){  // utiliser la fonction case_fence() pour déterminer si une barrière doit être affichée
            printf("%c", '|');
        }
        for (int j = 0; j < size_y; j++) {
            if (create_Board[i][j] == 0){
                Color(33,40); // jaune sur fond noir
            } else if (create_Board[i][j] == 1){
                Color(31,40); // rouge sur fond noir
            } else if (create_Board[i][j] == 2){
                Color(34,40); // bleu sur fond noir
            }
            printf("%d ", create_Board[i][j]);
            Color(0,0); // réinitialisation de la couleur
        }
        printf("\n");
    }
    printf("\n");
    printf("Rows size : %d\n", size_x);
    printf("Columns size : %d\n", size_y);
    printf("Fence : %d\n", case_fence());  // afficher si une barrière a été générée ou non
    return 0;
}
