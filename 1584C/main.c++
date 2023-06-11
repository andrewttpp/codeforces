#include <iostream>
#include <vector>
#include <algorithm>

void input_vector(std::vector<int> &vector, int count_elements) {
    for (int i = 0; i < count_elements; i++) {
        int element;
        std::cin >> element;
        vector.push_back(element);
    }
}

int main() {
    int count_input;

    std::cin >> count_input;

    for (int i = 0; i < count_input; ++i) {
        int vector_size;
        std::cin >> vector_size;

        std::vector<int> vector_a;
        std::vector<int> vector_b;
        input_vector(vector_a, vector_size);
        input_vector(vector_b, vector_size);

        std::sort(vector_a.begin(), vector_a.end());
        std::sort(vector_b.begin(), vector_b.end());

        std::string result = "YES";
        for (int j = 0; j < vector_size; ++j) {
            if (vector_a[j] != vector_b[j] and vector_a[j] + 1 != vector_b[j] ) {
                result = "NO";
                break;
            }
        }

        std::cout << result << std::endl;
    }

    return 0;
}