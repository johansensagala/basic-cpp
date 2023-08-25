#include <fstream>
#include <iostream>

int main() {
    std::fstream file("data.txt", std::ios::out | std::ios::in);
    
    if (file.is_open()) {
        file << "Writing data using fstream." << std::endl;
        
        file.seekg(0);  // Move to the beginning of the file
        std::string line;
        while (std::getline(file, line)) {
            std::cout << line << std::endl;
        }
        
        file.close();
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }
    
    return 0;
}
