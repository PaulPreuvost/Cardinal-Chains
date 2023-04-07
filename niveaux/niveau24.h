#include <stdio.h>
#include <stdlib.h>
//NIVEAU 24
//Taille du plateau
const int size_x = 5;
const int size_y = 5;

//Valeur du plateau
int grid[5][5] = {
        {5, 5, 5, 5, 6},
        {5, 5, 5, 5, 5},
        {5, 5, 5, 5, 5},
        {5, 5, 5, 5, 0},
        {5, 5, 5, 5, 9},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 0;
int cases_restantes4 = 0;
int cases_restantes5 = 22;
int cases_restantes6 = 1;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 3;
int y = 4;