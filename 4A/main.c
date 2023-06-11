#include <stdio.h>

int main() {
    int weight;
    scanf("%d", &weight);

    if (weight % 2 == 0 && weight > 2) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}