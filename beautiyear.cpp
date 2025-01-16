#include <iostream>
#include <string>
#include <algorithm>

bool hasDistinctDigits(int year) {
    std::string str = std::to_string(year);
    std::sort(str.begin(), str.end());
    return std::unique(str.begin(), str.end()) == str.end();
}

int main() {
    int year;
    std::cin >> year;
    while (true) {
        year++;
        if (hasDistinctDigits(year)) {
            std::cout << year << std::endl;
            break;
        }
    }
    return 0;
}
