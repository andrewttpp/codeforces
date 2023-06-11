#include <iostream>
#include <vector>

#define MAX_TREE_HEIGHT 1000
#define MAX_MINUTES 1001

int main() {
    long long count_input, difference;
    std::cin >> count_input >> difference;

    std::vector<long long> trees;
    for (long long i = 0 ; i < count_input; i++) {
        long long height;
        std::cin >> height;

        trees.push_back(height);
    }

    long long min_minutes = MAX_MINUTES;
    long long best_height;
    for (int i = 1; i <= MAX_TREE_HEIGHT; i++) {
        long long current_height = i;
        long long count_minutes = 0;
        for (auto tree: trees) {
            if (tree != current_height) {
                count_minutes ++;
            }

            current_height += difference;
        }

        if (count_minutes < min_minutes) {
            min_minutes = count_minutes;
            best_height = i;
        }
    }

    std::cout << min_minutes << std::endl;
    for (auto i = 0; i < trees.size(); i ++) {
        if (trees[i] < best_height) {
            std::cout << "+ " << i + 1 << " " << best_height - trees[i] << std::endl;
        } else if (trees[i] > best_height) {
            std::cout << "- " << i + 1 << " " << trees[i] - best_height << std::endl;
        }

        best_height += difference;
    }

    return 0;
}