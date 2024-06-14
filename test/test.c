#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libfdr/fdr.h>

#include "pro1.h"

int main() {
    FILE *girişDosyası = fopen("test.in", "r");
    if (!girişDosyası) {
        fprintf(stderr, "Test dosyası açılamadı\n");
        return 1;
    }

    FILE *çıkışDosyası = fopen("test.out", "w");
    if (!çıkışDosyası) {
        fprintf(stderr, "Test dosyası açılamadı\n");
        fclose(girişDosyası);
        return 1;
    }

    işle(girişDosyası, çıkışDosyası);

    fclose(girişDosyası);
    fclose(çıkışDosyası);

    return 0

