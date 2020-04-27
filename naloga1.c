#include <stdio.h>
#include "libnaloga1.h" // klicem svojo knjiznico
/// Rok Rozman
int main(int argc, char *argv[])
{
    int st1 = atoi(argv[1]); // preberem vrednost prvega argumenta
    int st2 = atoi(argv[2]); // preberem vrednost drugega argumenta
    int rezultat;
    rezultat=zmnozi(st1, st2); // klicem funkcijo
    printf("Funkcija zmnozi je vrnila %d\n",rezultat);
    char *niz= argv[3]; // dobim tretji argument
    char *obrnjen = obrni_niz(niz); // klicem funkcijo
    printf("Funkcija obrni_niz je vrnila: %s \n", obrnjen);

    return (0);
}
