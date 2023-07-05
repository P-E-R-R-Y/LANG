/*#include <string>
#include <vector>
#include <iostream>
#include <fstream>

int main() {
  std::ifstream file("example.txt"); // Open the file for reading

    if (file.is_open()) { // Check if the file was opened successfully
        std::string line;
        while (std::getline(file, line)) {

            std::string buffer = file.rdbuf();
            size_t pos = line.find("target"); // Find the position of the target string
            if (pos != std::string::npos) {
                std::string substring = line.substr(0, pos); // Extract the substring before the target string
                std::cout << substring << std::endl; // Process or display the extracted substring
            }
        }

        file.close(); // Close the file
    } else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0;
}*/

#include <iostream>
#include <fstream>
#include <string>
#include "parser/Parser.hpp"

int main() {
    Parser parser("test.perry");
}