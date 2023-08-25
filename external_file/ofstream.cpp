#include <iostream>
#include <fstream>

int main() {
    std::ofstream outputFile("output.txt");
    if (outputFile.is_open()) {
        outputFile << "Hello World!" << std::endl;
        outputFile.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }
    
    return 0;
}
