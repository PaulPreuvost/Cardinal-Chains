#include <stdio.h>
#include <stdlib.h>

//NIVEAU 10
//Taille du plateau
const int size_x = 5;
const int size_y = 5;

//Valeur du plateau
int grid[5][5] = {
        {1, 1, 1, 3, 4},
        {1, 9, 1, 3, 5},
        {1, 0, 1, 3, 3},
        {1, 9, 1, 1, 3},
        {1, 1, 1, 2, 2},

};

//Nombres de cases
int cases_restantes1 = 13;
int cases_restantes2 = 2;
int cases_restantes3 = 5;
int cases_restantes4 = 1;
int cases_restantes5 = 1;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 2;
int y = 1;
