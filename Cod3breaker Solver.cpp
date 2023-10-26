#include <iostream>

int main() {
    int numbers[] = {2, 3, 4, 5, 6, 7}; 

    std::string result = std::to_string(numbers[1] - numbers[0]);

    for (int i = 2; i < 6; i++) {
        result += std::to_string(numbers[i] - numbers[i - 1]);
    }

    std::cout << "The code is: " << result << std::endl;

    return 0;
}
