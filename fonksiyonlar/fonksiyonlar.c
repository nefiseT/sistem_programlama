#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fonksiyonlar.h"

void yaz(FILE* dosya, char* parametreler) {
    char* karakter = strtok(parametreler, " ");
    int adet = atoi(strtok(NULL, " "));

    while (adet-- > 0) {
        fputc(*karakter, dosya);
    }
}

void sil(FILE* dosya, char* parametreler) {
    int adet = atoi(parametreler);

    while (adet-- > 0) {
        fseek(dosya, -1, SEEK_CUR);
        fputc('\b', dosya);
        fputc('\0', dosya);
    }
}

void sonagit(FILE* dosya) {
    fseek(dosya, 0, SEEK_END);
}

void dur(FILE* dosya) {
    // Dosyayý kapatmadan programdan çýkýþ yapýlmasý istenmiyorsa, bu fonksiyonun içeriði boþ býrakýlabilir.
}

