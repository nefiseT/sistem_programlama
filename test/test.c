#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libfdr/fdr.h>

#include "pro1.h"

int main() {
    FILE *giri�Dosyas� = fopen("test.in", "r");
    if (!giri�Dosyas�) {
        fprintf(stderr, "Test dosyas� a��lamad�\n");
        return 1;
    }

    FILE *��k��Dosyas� = fopen("test.out", "w");
    if (!��k��Dosyas�) {
        fprintf(stderr, "Test dosyas� a��lamad�\n");
        fclose(giri�Dosyas�);
        return 1;
    }

    i�le(giri�Dosyas�, ��k��Dosyas�);

    fclose(giri�Dosyas�);
    fclose(��k��Dosyas�);

    return 0

