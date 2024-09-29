#include "business.hpp"
#include <algorithm>

void BUSINESS(const std::vector<std::string>& BS) {
    if (BS.size() == 1) {
        std::cout << "\nYour business is:\n\n";
    } else {
        std::cout << "\nYour businesses are:\n\n";
    }

    for (const auto& business : BS) {
        std::cout << "    " << business << "\n";
    }
}

bool AnotherBusiness() {
    std::string response;
    std::cout << "\nAnother business?  ";
    std::getline(std::cin, response);
    return (response == "y" || response == "Y" || response == "yes" || response == "Yes");
}
 