#include <iostream>

int main() {
    int count_input;
    std::cin >> count_input;

    for (int i = 0; i < count_input; i++) {
        int height_floor, weight_floor, robot_index_x, robot_index_y, dirty_cage_x, dirty_cage_y;
        std::cin >> height_floor >> weight_floor >> robot_index_x >> robot_index_y >> dirty_cage_x >> dirty_cage_y;

        int total_time = 0;
        while (true) {
            if (abs(robot_index_x) == dirty_cage_x or abs(robot_index_y) == dirty_cage_y) {
                break;
            }

            if (robot_index_x == height_floor) {
                robot_index_x = -height_floor;
            } else if (robot_index_x == 0) {
                robot_index_x = 0;
            }

            if (robot_index_y == weight_floor) {
                robot_index_y = -weight_floor;
            } else if (robot_index_y == 0) {
                robot_index_y = 0;
            }

            total_time++;
            robot_index_x++;
            robot_index_y++;
        }

        std::cout << total_time << std::endl;
    }
}