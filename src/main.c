#include <stdio.h>
#include <string.h>>
#include <stdlib.h>
#include "fonksiyonlar.h"
#include "komut_isle.h"
#include <libfdr/fdr.h> // libfdr kütüphanesi

int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Kullaným: %s <giris_dosyasi> <cikis_dosyasi>\n", argv[0]);
        return 1;
    }

    char* girisDosyasiAdi = argv[1];
    char* cikisDosyasiAdi = argv[2];

    FILE *giris_dosyasi = fopen(argv[1], "r");
    if (giris_dosyasi == NULL) {
        fprintf(stderr, "Hata: Giriþ dosyasý açýlamadý: %s\n", argv[1]);
        return 1;
    }

    FILE *cikis_dosyasi = fopen(argv[2], "w");
    if (cikis_dosyasi == NULL) {
        fprintf(stderr, "Hata: Çýkýþ dosyasý açýlamadý: %s\n", argv[2]);
        fclose(giris_dosyasi);
        return 1;
    }


    char satir[1024];
    while (fgets(satir, sizeof(satir), girisDosyasi)) {
        if (strlen(satir) == 0) {
            continue;
        }

        char komut = satir[0];
        char* parametreler = satir + 1;

        switch (komut) {
            case 'y':
                yaz(cikisDosyasi, parametreler);
                break;
            case 's':
                sil(cikisDosyasi, parametreler);
                break;
            case 'g':
                sonagit(cikisDosyasi);
                break;
            case 'd':
                dur(cikisDosyasi);
                fclose(girisDosyasi);
                fclose(cikisDosyasi);
                return 0;
            default:
                printf("Hatali komut: %c\n", komut);
                break;
        }
    }

    fclose(girisDosyasi);
    fclose(cikisDosyasi);

    return 0;
}

