#include <iostream>

int main() {
    const int MINUTES_PER_HOUR = 60;
    const int LEVEL_ONE_MINUTES = 78;
    const int LEVEL_TWO_MINUTES = 144;

    int level_one_hours;
    int level_one_rem_minutes;
    
    int level_two_hours;
    int level_two_rem_minutes;
    
    int difference_minutes;
    int difference_hours;
    int difference_rem_minutes;

    level_one_hours = LEVEL_ONE_MINUTES / MINUTES_PER_HOUR;
    level_one_rem_minutes = LEVEL_ONE_MINUTES % MINUTES_PER_HOUR;

    level_two_hours = LEVEL_TWO_MINUTES / MINUTES_PER_HOUR;
    level_two_rem_minutes = LEVEL_TWO_MINUTES % MINUTES_PER_HOUR;

    difference_minutes = LEVEL_TWO_MINUTES - LEVEL_ONE_MINUTES;
    difference_hours = difference_minutes / MINUTES_PER_HOUR;
    difference_rem_minutes = difference_minutes % MINUTES_PER_HOUR;

    
    std::cout << "Level 1 Completion Time: " 
              << level_one_hours << " hour(s) and " 
              << level_one_rem_minutes << " minute(s)\n";

    std::cout << "Level 2 Completion Time: " 
              << level_two_hours << " hour(s) and " 
              << level_two_rem_minutes << " minute(s)\n";

    std::cout << "Level 2 took " 
              << difference_hours << " hour(s) and " 
              << difference_rem_minutes << " minute(s) longer than Level 1\n";

    return 0;
}