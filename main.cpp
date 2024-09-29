#include "business.hpp"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

int main() {
    std::vector<std::string> BS;
    std::string input;
    std::cout << "Welcome to the Business Sorting Program!\n";

    do {
        std::cout << "\nPlease enter the name of a business: ";
        std::getline(std::cin, input);
        BS.push_back(input);
        std::sort(BS.begin(), BS.end());
        BUSINESS(BS);
        if (!AnotherBusiness()) {
            break;
        }
    } while (true);

    std::cout << "\nThank you for using the Business Sorting Program!\n";
    return 0;
}
