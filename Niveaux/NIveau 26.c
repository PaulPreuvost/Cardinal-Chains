#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void Color(int colorInput, int colorBack) {
    printf("\033[%d;%dm", colorInput, colorBack);
}

int grid[3][3] = {
    {0, 6, 5},
    {2, 2, 1},
    {4, 3, 0}
    };

int create_Board(int grid[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == -1) {
                printf("  ");
            }
            else if (grid[i][j] == 0){
                printf("X ");
                Color(33,40); // jaune sur fond noir
            }
            else if (grid[i][j] == 1) {
                Color(31, 40); // rouge sur fond noir
                printf("%d ", grid[i][j]);
                Color(0, 0); // réinitialisation de la couleur
            } 
            else if (grid[i][j] == 2) {
                Color(34, 40); // bleu sur fond noir
                printf("%d ", grid[i][j]);
                Color(0, 0); // réinitialisation de la couleur
            }
            else {
                printf("%d ", grid[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}

int main(){
    create_Board(grid);
    return 0;
}
