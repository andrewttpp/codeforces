#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int count_input;
    std::cin >> count_input;

    for (int i = 0; i < count_input; ++i) {
        int count_students;
        std::cin >> count_students;

        int current_second = 0;
        std::vector<int> time_students;
        for (int j = 0; j < count_students; ++j) {
            int time_enter, time_necessary;
            std::cin >> time_enter >> time_necessary;

            current_second++;
            if (current_second < time_enter) {
                current_second = time_enter;
            }

            if (current_second > time_necessary) {
                time_students.push_back(0);
                current_second--;
            } else {
                time_students.push_back(current_second);
            }
        }

        for (auto time_student: time_students) {
            std::cout << time_student << ' ';
        }

        std::cout << '\n';
    }

    return 0;
}