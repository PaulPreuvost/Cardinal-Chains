#include <stdio.h>
#include <stdlib.h>

//NIVEAU 3
//Taille du plateau
const int size_x = 3;
const int size_y = 4;

//Valeur du plateau
int grid[3][4] = {
        {3, 2, 2, 1},
        {3, 6, 5, 1},
        {4, 4, 5, 0}

};

//Nombres de cases
int cases_restantes1 = 2;
int cases_restantes2 = 2;
int cases_restantes3 = 2;
int cases_restantes4 = 2;
int cases_restantes5 = 2;
int cases_restantes6 = 1;
int cases_restantes7 = 0;
int cases_restantes8 = 0;

//Position du initiale du joueur
int x = 2;
int y = 3;
