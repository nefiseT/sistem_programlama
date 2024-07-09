#include <stdio.h>
#include <string.h>

typedef enum {
    KOMUT_YAZ,
    KOMUT_SIL,
    KOMUT_SONAGIT,
    KOMUT_DUR
} KomutTipi;

typedef struct {
    KomutTipi tip;
    char parametre1[100];
    char parametre2[100];
} Komut;

int parseKomut(char *satir, Komut *komut);
void yazKomut(char *dosyaAdı, Komut *komut);
void silKomut(char *dosyaAdı, Komut *komut);
void sonagitKomut(char *dosyaAdı, Komut *komut);
void durKomut(char *dosyaAdı, Komut *komut);
