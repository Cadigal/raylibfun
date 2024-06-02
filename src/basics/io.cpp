#include <iostream>

int main() {
    std::cout << "Write the text you want echoed back to you, followed by a newline" << std::endl;

    std::string user_input;
    std::cin >> user_input;

    std::cout << "Your input was:" << std::endl;
    std::cout << user_input;
    return 0;
}
