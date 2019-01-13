#include "matcher.hpp"

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>


int main(int argc, char* argv[] ) {
  if (argc < 3 ) {
    std::cout << "Usage:" << std::endl;
    std::cout << "spelling-bee <path> <letters>" << std::endl;
    std::cout << "<letters> are the letters required to make words, first letter is the required letter" << std::endl;
    std::cout << "<letters> must be lower case" << std::endl;
    return 1;
  }

  matcher m(argv[2]);

  std::string candidate;;
  std::ifstream dict_file((std::string(argv[1]))); 
  
  while(std::getline(dict_file, candidate)) {
    if(m.match(candidate)){
      std::cout << candidate << std::endl; 
    }
  }
  return 0; 
}
