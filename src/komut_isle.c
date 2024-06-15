#include "komut_isle.h"

int komut_oku(FILE *dosya, Komut *komut) {
    char satir[1024];

    if (fgets(satir, sizeof(satir), dosya) == NULL) {
        return -1;
    }

    if (satir[strlen(satir) - 1] != '\n') {
        while (fgetc(dosya) != '\n' && ferror(dosya) == 0);
        return -1;
    }

    satir[strlen(satir) - 1] = '\0';
    char *uzanti = strrchr(satir, '.');
    if (uzanti == NULL || strcmp(uzanti, ".dat") != 0) {
        fprintf(stderr, "Hata: Giriþ dosyasý .dat formatýnda olmalýdýr.\n");
        return -1;
    }

    char *token = strtok(satir, ":");
    if (token == NULL) {
        return -1;
    }

    if (strcmp(token, "yaz") == 0) {
        komut->tip = KOMUT_YAZ;
    } else if (strcmp(token, "sil") == 0) {
        komut->tip = KOMUT_SIL;
    } else if (strcmp(token, "sonagit") == 0) {
        komut->tip = KOMUT_SONAGIT;
    } else if (strcmp(token, "dur") == 0) {
        komut->tip = KOMUT_DUR;
    } else {
        fprintf(stderr, "Hata: Tanýnmayan komut: %s\n", token);
        return -1;
    }
    
    strcpy(komut->parametreler, strtok(NULL, "\n"));

    return 0;
}
