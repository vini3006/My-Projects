#include <stdio.h>

int main() {
    int malha[200][200];

    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            malha[i][j] = 0;
        }
    }

    for (int i = 0; i < 200; i++) {
        for (int j = 0; j < 200; j++) {
            printf("%d ", malha[i][j]);
        }

        printf("\n");
    }

    return 0;
}