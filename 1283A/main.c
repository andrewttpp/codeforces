#include <stdio.h>

int main() {
    int count_input;
    scanf("%d", &count_input);

    for (int steps = 1; steps <= count_input; steps++) {
        int hours, minutes;
        scanf("%d %d", &hours, &minutes);

        int remains = (24 - hours) * 60 - minutes;

        printf("%d\n", remains);

    }

    return 0;
}
