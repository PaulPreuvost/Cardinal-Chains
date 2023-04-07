#include <stdio.h>
#include <stdlib.h>

//NIVEAU 11
//Taille du plateau
const int size_x = 5;
const int size_y = 6;

//Valeur du plateau
int grid[5][6] = {
        {9, 7, 6, 3, 2, 9},
        {8, 8, 5, 4, 1, 0},
        {9, 4, 4, 4, 9, 9},
        {9, 4, 9, 4, 9, 9},
        {9, 4, 4, 4, 9, 9},

};

//Nombres de cases
int cases_restantes1 = 1;
int cases_restantes2 = 1;
int cases_restantes3 = 1;
int cases_restantes4 = 9;
int cases_restantes5 = 1;
int cases_restantes6 = 1;
int cases_restantes7 = 1;
int cases_restantes8 = 2;

//Position du initiale du joueur
int x = 1;
int y = 5;
