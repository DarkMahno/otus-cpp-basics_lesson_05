#include "table_score.h"

#include <cstdlib>
#include <string>
#include <iostream>


int check_args(int argc, char **&argv, bool &arg_max, int &max_value_args) {

    if (argc > 1) {
        for (int i = 1; i < argc; i++) {

            std::string argv_value = argv[i];
            if (argv_value == "-max") {

//                std::cout << "-max argument was detected!" << std::endl;
                arg_max = true;

                if (argc < i + 2) {
                    std::cout << "Wrong usage! The argument '-max' requires some value!" << std::endl;
                    std::exit(-1);
                }

                // We need to parse the string to the int value
                max_value_args = std::stoi(argv[i + 1]);
//                std::cout << "max_value_args: " << max_value_args << std::endl;

            }
            if (argv_value == "-table") {

                table_score::read();
                std::exit(0);

            }
        }
    }

    return 0;
}