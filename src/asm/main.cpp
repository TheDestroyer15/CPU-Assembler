#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


enum class TokenType{
    LDA,

};

struct Token{
    TokenType type;
    std::string value;
};

int main(int argc, char** argv){
    if(argc != 2){
        std::cerr << "No file found";
        return -1;
    }
    std::string contents;   
    {
    std::stringstream contents_stream;
    std::fstream input(argv[1], std::ios::in);
    contents_stream << input.rdbuf();
    contents = contents_stream.str();
    }
    std::cout << contents << std::endl;
    

    return 0;
}
