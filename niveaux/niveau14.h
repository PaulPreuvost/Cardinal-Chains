#include <stdio.h>
#include <stdlib.h>

//NIVEAU 14
//Taille du plateau
const int size_x = 5;
const int size_y = 4;

//Valeur du plateau
int grid[5][4] = {
        {9, 2, 2, 2},
        {9, 2, 2, 2},
        {0, 1, 2, 5},
        {9, 2, 2, 4},
        {9, 2, 2, 3},
};

//Nombres de cases
int cases_restantes1 = 1;
int cases_restantes2 = 11;
int cases_restantes3 = 1;
int cases_restantes4 = 1;
int cases_restantes5 = 1;
int cases_restantes6 = 0;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 2;
int y = 0;