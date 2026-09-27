#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char const* argv[]) {
    std::string filePath = std::string(argv[0]);
    // argv[0] is .../cpp/build/Main
    // Remove "build/Main" characters to get parent dir
    filePath = filePath.substr(0, filePath.size()-10) + "tes.txt";
    
    std::cout << filePath << "\n";
    std::ofstream outFile(filePath);
    if (!outFile.is_open()) {
        std::cout << "Failed to Open File!\n";
        return 1;
    }
    
    outFile << argv[0] << "\n";
    outFile.close();
    return 0;
}