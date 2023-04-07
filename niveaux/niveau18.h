#include <stdio.h>
#include <stdlib.h>

//NIVEAU 18
//Taille du plateau
const int size_x = 3;
const int size_y = 3;

//Valeur du plateau
int grid[3][3] = {
        {9, 9, 6},
        {3, 3, 5},
        {0, 4, 5},
};

//Nombres de cases
int cases_restantes1 = 0;
int cases_restantes2 = 0;
int cases_restantes3 = 2;
int cases_restantes4 = 1;
int cases_restantes5 = 2;
int cases_restantes6 = 1;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 2;
int y = 0;