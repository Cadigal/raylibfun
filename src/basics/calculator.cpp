#include <iostream>

int read_number(const std::string &name) {
    std::cout << "Write the " << name << " you want to add, followed by a newline" << std::endl;
    std::string user_input;
    std::cin >> user_input;
    return std::stoi(user_input);
}

int main() {
    const auto input_0 = read_number("first number");
    const auto input_1 = read_number("second number");
    const auto result = input_0 + input_1;
    std::cout << input_0 << " + " << input_1 << " = " << result << std::endl;
    return 0;
}
