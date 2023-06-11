#include <stdio.h>

int main() {
    int box_one, box_two, balls_one, balls_two;
    scanf("%d %d %d %d", &box_one, &box_two, &balls_one, &balls_two);

    if (box_one > box_two) {
        printf("First");
    } else if (box_one <= box_two) {
        printf("Second");
    }

    return 0;
}