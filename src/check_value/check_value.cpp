#include <iostream>

#include <cstdlib>
#include <ctime>

void random_value(int &, int);

void check_value (int &user_score, int max_target_value) {

    int target_value = 100;
    random_value(target_value, max_target_value);
//    std::cout << "target_value: " << target_value << std::endl;
    int current_value = 0;
    int attempts_count = 0;
    bool not_win = true;

    std::cout << "Enter your guess:" << std::endl;

    do {
        std::cin >> current_value;
        attempts_count++;

        if (current_value < target_value) {
            std::cout << "Value greater than " << current_value << std::endl;
        }
        else if (current_value > target_value) {
            std::cout << "Value less than " << current_value << std::endl;
        }
        else {
            std::cout << std::endl;
            std::cout << "Great! You win!" << std::endl;
            break;
        }

    } while(true);

    std::cout << "Your score is " << attempts_count << " attempts" << std::endl;
    user_score = attempts_count;

}



void random_value(int &value, int max_value) {

//    const int max_value = 100;

    std::srand(std::time(nullptr)); // use current time as seed for random generator

    value = std::rand() % max_value;

//    std::cout << "Random Value: " << value << std::endl;

}