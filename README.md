# Knjiznice
## Napišite kodo (libnaloga1.c in libnaloga1.h) za izdelavo knjižnice z dvema funkcijama:

- int zmnozi(int, int) in
- char* obrni_niz(char*).

Prva funkcija zmnoži dve števili tipa int in vrne rezultat. Druga funkcija obrne vhodni niz (npr. "abcd" v "dcba").

## Napišite še glavni program (naloga1.c), ki uporablja omenjeno knjižnico in prejme tri argumente:
- dve števili in niz.

V glavnem programu (naloga1.c) z danimi vhodnimi argumenti pokličite obe funkciji iz knjižnice libnaloga1 in izpišite rezultata na standardni izhod.
Izdelajte statično knjižnico (libnaloga1.a) in dinamično knjižnico (libnaloga1.so).
Statično knjižnico povežite z glavnim programom v izhodni izvedljivi modul (./naloga1_staticno).
Dinamično knjižnico implicitno (./naloga1_implicitno) in eksplicitno (./naloga1_explicitno) povežite z glavnim programom. Izvorno kodo glavnega programa z eksplicitnim povezovanjem shranite vdatoteko naloga1_explicitno.c