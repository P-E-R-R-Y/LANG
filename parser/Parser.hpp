#include <string>
#include <vector>
#include <iostream>
#include <fstream>

const int BUFFER_SIZE = 20;

class Parser {
    public:
        Parser(std::string filename) {
            std::ifstream file(filename.c_str()); // Open the file for reading
            char charBuffer[BUFFER_SIZE + 1];
            std::string stb;

            if (file.is_open()) {//read piece by piece

                while (file.read(charBuffer, BUFFER_SIZE) || stb.length() != 0) {
                    stb.append(charBuffer);
                    std::cout << stb << std::endl << std::endl;
                    this->split(stb);
                }

            };
        };

    private:
        void split(std::string& buffer) {
            
//            buffer.clear();
        };

    public:
        std::vector<std::string> variables;
        std::vector<std::string> functions;
        std::vector<std::string> parser;
};