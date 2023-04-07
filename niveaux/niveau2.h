#include <stdio.h>
#include <stdlib.h>

//NIVEAU 2
//Taille du plateau
const int size_x = 3;
const int size_y = 4;

//Valeur du plateau
int grid[3][4] = {
        {3, 2, 2, 1},
        {4, 0, 1, 1},
        {5, 6, 7, 8}

};

//Nombres de cases
int cases_restantes1 = 3;
int cases_restantes2 = 2;
int cases_restantes3 = 1;
int cases_restantes4 = 1;
int cases_restantes5 = 1;
int cases_restantes6 = 1;
int cases_restantes7 = 1;
int cases_restantes8 = 1;

//Position du initiale du joueur
int x = 1;
int y = 1;
