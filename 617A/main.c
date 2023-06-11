#include "stdio.h"

int main() {
    int friendHome;
    scanf("%d", &friendHome);

    int position = 5;
    if (friendHome % position == 0) {
        int minSteps = friendHome / position;

        printf("%d", minSteps);

    } else {
        int minSteps = friendHome / position + 1;

        printf("%d", minSteps);

    }

    return 0;
}