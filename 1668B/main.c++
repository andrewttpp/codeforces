#include <iostream>
#include <vector>

int main() {
    long long count_input;
    std::cin >> count_input;

    for (long long i = 0; i < count_input; ++i) {
        long long count_peoples, count_chairs;
        std::cin >> count_peoples >> count_chairs;

        std::vector<long long> people_limits;
        for (long long j = 0; j < count_peoples; ++j) {
            long long limit;
            std::cin >> limit;
            people_limits.push_back(limit);
        }

        std::string result;
        long long next_free_chair = people_limits[0];
        long long min_value = people_limits[0];
        long long max_value = people_limits[0];
        for (long long k = 1; k < people_limits.size(); k++) {
            min_value = std::min(min_value, people_limits[k]);
            max_value = std::max(max_value, people_limits[k]);
            next_free_chair += people_limits[k];
        }

        result = count_peoples + next_free_chair - min_value + max_value <= count_chairs ? "YES" : "NO";

        std::cout << result << std::endl;
    }
}