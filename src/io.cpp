#include <iostream>

int getUserInput() {
    std::cout << "Please enter an integer: ";

    int value;
    std::cin >> value;

    return value;
}

int getMathOperator() {
    std::cout << "Please select an operator (1 = +, 2 = -, 3 = *, 4 = /): ";

    int op;
    std::cin >> op;

    return op;
}

void printResult (int result) {
    std::cout << "Your result is: " << result << std::endl;
}
