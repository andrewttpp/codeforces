#include <stdio.h>

int main() {
    int sum_cards;
    scanf("%d", &sum_cards);

    int first_card = 10;
    if (first_card >= sum_cards || sum_cards - first_card >= 12) {
        printf("%d", 0);
    } else if (sum_cards - first_card >= 1 && sum_cards - first_card <= 9 || sum_cards - first_card == 11) {
        printf("%d", 4);
    } else if (sum_cards - first_card == 10) {
        printf("%d", 15);
    }

    return 0;
}