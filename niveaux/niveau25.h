#include <stdio.h>
#include <stdlib.h>
//NIVEAU 25
//Taille du plateau
const int size_x = 5;
const int size_y = 5;

//Valeur du plateau
int grid[5][5] = {
        {6, 6, 6, 6, 6},
        {7, 6, 6, 6, 6},
        {9, 5, 9, 9, 9},
        {5, 5, 9, 5, 0},
        {5, 5, 5, 5, 9},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 0;
int cases_restantes4 = 0;
int cases_restantes5 = 8;
int cases_restantes6 = 9;
int cases_restantes7 = 1;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 3;
int y = 4;