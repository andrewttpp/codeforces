#include <stdio.h>

int main() {
    long long priceBanana, countDollar, countBanana;
    scanf("%lld %lld %lld", &priceBanana, &countDollar, &countBanana);

    long long allPrice = ((priceBanana + countBanana * priceBanana) * countBanana) / 2;
    if (allPrice < countDollar) {
        printf("0");
    } else {
        long long borrow = allPrice - countDollar;

        printf("%lld", borrow);
    }

    return 0;
}