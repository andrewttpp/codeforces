#include <iostream>

#define REMAINING_DAYLIGHT_HOURS_ON_THE_FIRST_DAY 8
#define NUMBER_OF_HOURS_PER_HALF_DAY 12

int main() {
    int current_track_height, current_height_of_the_apple, speed_in_the_daytime, speed_at_night;
    std::cin >> current_track_height >> current_height_of_the_apple >> speed_in_the_daytime >> speed_at_night;

    int height_difference = current_height_of_the_apple - current_track_height;
    int distance_in_first_day = speed_in_the_daytime * REMAINING_DAYLIGHT_HOURS_ON_THE_FIRST_DAY;
    if ((speed_in_the_daytime < speed_at_night or speed_in_the_daytime == speed_at_night)
    and height_difference >distance_in_first_day) {

        std::cout << -1;
    } else {
        if (height_difference <= distance_in_first_day) {
            std::cout << 0;
        } else {
            int remaining_distance_first_day = height_difference - distance_in_first_day;
            int result = remaining_distance_first_day / ((speed_in_the_daytime - speed_at_night) * NUMBER_OF_HOURS_PER_HALF_DAY);
            if (remaining_distance_first_day % ((speed_in_the_daytime - speed_at_night) * NUMBER_OF_HOURS_PER_HALF_DAY)) {
                result ++;
            }

            std::cout << result;
        }
    }
}