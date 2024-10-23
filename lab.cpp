#include <iostream>
#include <string>

int find(const std::string &str, char ch) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ch) return i;
    }
    return -1;
}

int find(const std::string &str, const std::string &substr) {
    int n = str.length(), m = substr.length();
    for (int i = 0; i <= n - m; ++i) {
        if (str.substr(i, m) == substr) return i;
    }
    return -1;
}


int main() {
    std::string str = "The tree house is empty";

    std::cout << find(str, 'e') << std::endl;
    std::cout << find(str, ' ') << std::endl;
    std::cout << find(str, 'z') << std::endl;

    std::cout << find(str, "house") << std::endl;
    std::cout << find(str, "empty") << std::endl;
    std::cout << find(str, "the") << std::endl;

    return 0;
}