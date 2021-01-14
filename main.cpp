#include <iostream>
#include <string>
#include "lib.h"

const int NOT_ENOUGH_ARGS = -1;

int main(int argc, char **argv) {
    if (argc < 4) {
        std::cout << "Not enough arguments!";
        return NOT_ENOUGH_ARGS;
    }

    const float a = std::stof(argv[1]);
    const float b = std::stof(argv[2]);
    const float c = std::stof(argv[3]);

    float *x = findRoots(a, b, c);

    int rootsCount = (int)x[0];
    if (rootsCount == 0) {
        std::cout << "No roots" << std::endl;
    } else {
        for (size_t i = 1; i <= rootsCount; i++) {
            std::cout << "x" << i << " = " << x[i] << std::endl;
        }
    }
    return 0;
}
