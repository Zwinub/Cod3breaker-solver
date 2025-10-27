#include <iostream>
#include <string>

int main() {
    int numbers[6];

    std::cout << "Enter the 6 numbers: ";
    for (int i = 0; i < 6; i++) {
        std::cin >> numbers[i];
    }

    std::string result = std::to_string(numbers[1] - numbers[0]);

    for (int i = 2; i < 6; i++) {
        result += std::to_string(numbers[i] - numbers[i - 1]);
    }

    std::cout << "The code is: " << result << std::endl;

    return 0;
}