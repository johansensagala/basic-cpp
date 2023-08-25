#include <fstream>
#include <iostream>
#include <string>

int main() {
    std::ifstream inputFile("input.txt");
    if (inputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::cout << line << std::endl;
        }
        inputFile.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }
    
    return 0;
}
