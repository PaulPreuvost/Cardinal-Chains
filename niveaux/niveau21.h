#include <stdio.h>
#include <stdlib.h>

//NIVEAU 21
//Taille du plateau
const int size_x = 4;
const int size_y = 4;

//Valeur du plateau
int grid[4][4] = {
        {6, 7, 7, 7},
        {6, 4, 4, 8},
        {6, 5, 4, 8},
        {5, 5, 0, 8},

};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 0;
int cases_restantes4 = 3;
int cases_restantes5 = 3;
int cases_restantes6 = 3;
int cases_restantes7 = 3;
int cases_restantes8 = 3;

//Position du initiale du joueur
int x = 3;
int y = 2;