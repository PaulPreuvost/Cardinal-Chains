#include <stdio.h>
#include <stdlib.h>

//NIVEAU 13
//Taille du plateau
const int size_x = 4;
const int size_y = 4;

//Valeur du plateau
int grid[4][4] = {
        {9, 9, 8, 7},
        {4, 4, 4, 6},
        {4, 0, 4, 5},
        {4, 4, 9, 9},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 0;
int cases_restantes4 = 7;
int cases_restantes5 = 1;
int cases_restantes6 = 1;
int cases_restantes7 = 1;
int cases_restantes8 = 1;

//Position du initiale du joueur
int x = 2;
int y = 1;