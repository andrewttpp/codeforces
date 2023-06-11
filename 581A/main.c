#include <stdio.h>
#include <math.h>

int main() {
    int redSocks, blueSocks;
    scanf("%d %d", &redSocks, &blueSocks);

    int difSocks = abs(redSocks - blueSocks);
    if (redSocks > blueSocks) {
        int monoSocks = difSocks / 2;

        printf("%d %d", blueSocks, monoSocks);
    } else {
        int monoSocks = difSocks / 2;

        printf("%d %d", redSocks, monoSocks);
    }

    return 0;
}