#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int park_length, park_width, count_spider;
    std::cin >> park_length >> park_width >> count_spider;

    std::vector<std::string> movements(park_length);

    for (auto &i: movements) {
        std::cin >> i;
    }

    for (int i = 0; i < park_width; ++i) {
        int count_spider_in_current_park_column = 0;
        for (int j = 0; j < park_length; ++j) {
            if (j + i < park_width && movements[j][j + i] == 'L') {
                count_spider_in_current_park_column++;
            }

            if (i - j >= 0 && movements[j][i - j] == 'R') {
                count_spider_in_current_park_column++;
            }

            if (2 * j < park_length && movements[2 * j][i] == 'U') {
                count_spider_in_current_park_column++;
            }
        }

        std::cout << count_spider_in_current_park_column << ' ';
    }

    return 0;
}