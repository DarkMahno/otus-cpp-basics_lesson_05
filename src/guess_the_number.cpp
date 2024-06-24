#include "check_args.h"
#include "check_value.h"
#include "table_score.h"

#include <iostream>

int main(int argc, char** argv) {

    std::string user_name;
    int user_score;
    int max_value;
    bool arg_max = false;
    int max_value_args;

    check_args(argc, argv, arg_max, max_value_args);

    // Ask about name
    std::cout << "Hi! Enter your name, please:" << std::endl;
    std::cin >> user_name;

    // Set Max Value
    if (arg_max) {
        max_value = max_value_args;
    } else {
        max_value = 100;
    }
    std::cout << "max_value: " << max_value << std::endl;

    check_value(user_score, max_value);
    table_score::write(user_name, user_score);
    table_score::read();

    return 0;
}
