#ifndef KOMUT_ISLE_H
#define KOMUT_ISLE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libfdr/fdr.h>

typedef enum {
    KOMUT_YAZ,
    KOMUT_SIL,
    KOMUT_SONAGIT,
    KOMUT_DUR
} KomutTipi;

typedef struct {
    KomutTipi tip;
    char parametreler[100];
} Komut;

int komut_oku(FILE *dosya, Komut *komut);
void komut_isle(FILE *giris_dosyasi, FILE *cikis_dosyasi, Komut komut){
    switch (komut.tip) {
        case KOMUT_YAZ:
            // Yazma işlemini gerçekleştir
        break;
        case KOMUT;
}

#endif
