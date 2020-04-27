#include "libnaloga1.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int zmnozi(int st1, int st2) //funkcija zmnozi
{
  return st1*st2; // zmonzimo stevili
}

char* obrni_niz(char* niz) //funkcija obrni
{
    size_t dolzina = strlen(niz); // dobimo kako dolgi niz je
    char* temp = (char*)malloc((dolzina + 1) * sizeof(char)); // si rezerviramo prostor
    temp[dolzina] = '\0';
    for(int i = 0; i < dolzina; i++) {
        // si od zadaj prestavljamo naprej
       temp[i] = niz[dolzina - 1 - i];
    }
    return temp; // vrnemo rezultat
}
