#include <stdio.h>

int main() {

    int requests;
    scanf("%d\n", &requests);

    for (int lenSteps = 1; lenSteps <= requests; lenSteps++) {
        long long countLiters, priceBottle1, priceBottle2;
        scanf("%lld %lld %lld", &countLiters, &priceBottle1, &priceBottle2);

        if (priceBottle1 * 2 > priceBottle2 && countLiters % 2 == 0 && countLiters > 1) {
            printf("%lld\n", priceBottle2 * countLiters / 2);

        } else if (priceBottle1 * 2 > priceBottle2 && countLiters % 2 == 1 && countLiters > 1) {
            printf("%lld\n", priceBottle2 * (countLiters - 1) / 2 + priceBottle1);

        } else {
            printf("%lld\n", countLiters * priceBottle1);
        }
    }

    return 0;
}