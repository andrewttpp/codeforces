#include <stdio.h>

int main() {
    int count_sets;
    scanf("%d", &count_sets);

    for (int i = 1; i <= count_sets; i++) {
        int lections, practical, pen_pairs, pencil_pairs, all_items;
        scanf("%d %d %d %d %d", &lections, &practical, &pen_pairs, &pencil_pairs, &all_items);

        int min_pen = lections % pen_pairs == 0 ? lections / pen_pairs : (lections / pen_pairs) + 1;

        int min_pencil = practical % pencil_pairs == 0 ? practical / pencil_pairs : (practical / pencil_pairs) + 1;

        if (min_pen + min_pencil <= all_items) {
            min_pen = all_items - min_pencil;
            printf("%d %d\n", min_pen, min_pencil);
        } else {
            printf("%d\n", -1);
        }
    }

    return 0;

}