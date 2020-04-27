#include <dlfcn.h>
#include <locale.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  void* handle = NULL; // handle damo na null 
  int (*zmnozi)(int,int); // nasi funkciji
  char* (*obrni_niz)(char* niz); // nasi funkciji
  int st1 = atoi(argv[1]);
  int st2 = atoi(argv[2]);
  char* niz =argv[3];
  printf("Primer eksplicitne uporabe dinamicnih knjiznic\n");
  handle = dlopen("./libnaloga1.so",RTLD_LAZY); //odpremo kniznico libnaloga1.so
  if (handle == NULL)
  {
    perror("Ne morem odpreti libnaloga1.so\n");
    return -1;
  }

  /* Klic prve funkcije */
  zmnozi=(int(*)(int,int))dlsym(handle,"zmnozi");
  if (zmnozi==NULL)
  {
    perror("Ne najdem funkcije zmnozi\n");
    return -3;
  }
  printf("Zmnozi vrne: %d\n",zmnozi(st1,st2)); // izpisemo vrnjeno vrednost funkcije

  /* Klic druge funkcije */
  obrni_niz=(char(*)(char *))dlsym(handle,"obrni_niz");
  if (obrni_niz==NULL)
  {
    perror("Ne najdem funkcije obrni_niz\n");
    return -2;
  }
  printf("Obrnjen niz vrnjen: %s ",obrni_niz(niz));
  
  dlclose(handle); // zapremo handle
  
  return 0;
}
