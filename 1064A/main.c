#include <stdio.h>

int main() {
    int side_a, side_b, side_c;
    scanf("%d %d %d", &side_a, &side_b, &side_c);

    int check = 0;
    if (side_a >= side_b && side_a >= side_c) {
        check = side_a - (side_b + side_c);
    } else if (side_b >= side_a && side_b >= side_c) {
        check = side_b - (side_a + side_c);
    } else if (side_c >= side_a && side_c >= side_b) {
        check = side_c - (side_a + side_b);
    }

    int minutes = 0;
    if (check >= 0) {
        minutes = check + 1;
    }

    printf("%d", minutes);

    return 0;
}