#include <stdio.h>
#include <stdlib.h>

//Verifications

//Verifie si on peut remplacer la case
int set_Color(){
    if (grid[x][y] == 1){
        grid[x][y] = 0;
        cases_restantes1--;
    } else if (grid[x][y] == 2){
        grid[x][y] = 0;
        cases_restantes2--;
    } else if (grid[x][y] == 3){
        grid[x][y] = 0;
        cases_restantes3--;
    }else if (grid[x][y] == 4){
        grid[x][y] = 0;
        cases_restantes4--;
    } else if (grid[x][y] == 5){
        grid[x][y] = 0;
        cases_restantes5--;
    } else if (grid[x][y] == 6){
        grid[x][y] = 0;
        cases_restantes6--;
    }else if (grid[x][y] == 7){
        grid[x][y] = 0;
        cases_restantes7--;
    }else if (grid[x][y] == 8){
        grid[x][y] = 0;
        cases_restantes8--;
    }
    return 0;
}

//Verifie si on peut remplacer la case à droite
int verif_Possible_Right(){
    if (grid[x][y+1] == 1 && grid[x][y+1] != 9) {
        y += 1;
        set_Color();
    } else if (grid[x][y+1] == 2 && cases_restantes1 == 0 && grid[x][y+1] != 9){
        y += 1;
        set_Color();
    } else if (grid[x][y+1] == 3 && cases_restantes2 == 0 && grid[x][y+1] != 9){
        y += 1;
        set_Color();
    } else if (grid[x][y+1] == 4 && cases_restantes3 == 0 && grid[x][y+1] != 9){
        y += 1;
        set_Color();
    } else if (grid[x][y+1] == 5 && cases_restantes4 == 0 && grid[x][y+1] != 9){
        y += 1;
        set_Color();
    } else if (grid[x][y+1] == 6 && cases_restantes5 == 0 && grid[x][y+1] != 9){
        y += 1;
        set_Color();
    } else if (grid[x][y+1] == 7 && cases_restantes6 == 0 && grid[x][y+1] != 9){
        y += 1;
        set_Color();
    } else if (grid[x][y+1] == 8 && cases_restantes7 == 0 && grid[x][y+1] != 9){
        y += 1;
        set_Color();
    }
    return 0;
}

//Verifie si on peut remplacer la case à gauche
int verif_Possible_Left(){
    if (grid[x][y-1] == 1 && grid[x][y-1] != 9) {
        y -= 1;
        set_Color();
    } else if (grid[x][y-1] == 2 && cases_restantes1 == 0 && grid[x][y-1] != 9){
        y -= 1;
        set_Color();
    } else if (grid[x][y-1] == 3 && cases_restantes2 == 0 && grid[x][y-1] != 9){
        y -= 1;
        set_Color();
    } else if (grid[x][y-1] == 4 && cases_restantes3 == 0 && grid[x][y-1] != 9){
        y -= 1;
        set_Color();
    } else if (grid[x][y-1] == 5 && cases_restantes4 == 0 && grid[x][y-1] != 9){
        y -= 1;
        set_Color();
    } else if (grid[x][y-1] == 6 && cases_restantes5 == 0 && grid[x][y-1] != 9){
        y -= 1;
        set_Color();
    } else if (grid[x][y-1] == 7 && cases_restantes6 == 0 && grid[x][y-1] != 9){
        y -= 1;
        set_Color();
    } else if (grid[x][y-1] == 8 && cases_restantes7 == 0 && grid[x][y-1] != 9){
        y -= 1;
        set_Color();
    }
    return 0;
}

//Verifie si on peut remplacer la case en haut
int verif_Possible_Top(){
    if (grid[x-1][y] == 1 && grid[x-1][y] != 9) {
        x -= 1;
        set_Color();
    } else if (grid[x-1][y] == 2 && cases_restantes1 == 0 && grid[x-1][y] != 9){
        x -= 1;
        set_Color();
    } else if (grid[x-1][y] == 3 && cases_restantes2 == 0 && grid[x-1][y] != 9){
        x -= 1;
        set_Color();
    } else if (grid[x-1][y] == 4 && cases_restantes3 == 0 && grid[x-1][y] != 9){
        x -= 1;
        set_Color();
    } else if (grid[x-1][y] == 5 && cases_restantes4 == 0 && grid[x-1][y] != 9){
        x -= 1;
        set_Color();
    } else if (grid[x-1][y] == 6 && cases_restantes5 == 0 && grid[x-1][y] != 9){
        x -= 1;
        set_Color();
    } else if (grid[x-1][y] == 7 && cases_restantes6 == 0 && grid[x-1][y] != 9){
        x -= 1;
        set_Color();
    } else if (grid[x-1][y] == 8 && cases_restantes7 == 0 && grid[x-1][y] != 9){
        x -= 1;
        set_Color();
    }
    return 0;
}

//Verifie si on peut remplacer la case en bas
int verif_Possible_Bot(){
    if (grid[x+1][y] == 1 && grid[x+1][y] != 9) {
        x += 1;
        set_Color();
    } else if (grid[x+1][y] == 2 && cases_restantes1 == 0 && grid[x+1][y] != 9){
        x += 1;
        set_Color();
    } else if (grid[x+1][y] == 3 && cases_restantes2 == 0 && grid[x+1][y] != 9){
        x += 1;
        set_Color();
    } else if (grid[x+1][y] == 4 && cases_restantes3 == 0 && grid[x+1][y] != 9){
        x += 1;
        set_Color();
    } else if (grid[x+1][y] == 5 && cases_restantes4 == 0 && grid[x+1][y] != 9){
        x += 1;
        set_Color();
    } else if (grid[x+1][y] == 6 && cases_restantes5 == 0 && grid[x+1][y] != 9){
        x += 1;
        set_Color();
    } else if (grid[x+1][y] == 7 && cases_restantes6 == 0 && grid[x+1][y] != 9){
        x += 1;
        set_Color();
    } else if (grid[x+1][y] == 8 && cases_restantes7 == 0 && grid[x+1][y] != 9){
        x += 1;
        set_Color();
    }
    return 0;
}

//Verifie si on a gagné
int verif_Victory(){
    if (cases_restantes1 == 0 && cases_restantes2 == 0 && cases_restantes3 == 0 && cases_restantes4 == 0 && cases_restantes5 == 0 && cases_restantes6 == 0 && cases_restantes7 == 0 && cases_restantes8 == 0) {
        return 1;
    } else {
        return 0;
    }
}