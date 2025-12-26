#include <fstream>
#include <iostream>
#include <string>

int main() {
  std::ifstream inf{"resources/testinput.txt"};

  if (!inf) {
    std::cerr << "No file";
    return 1;
  }

  std::string strInput{};
  while (std::getline(inf, strInput)) {
    std::cout << strInput << "\n";
    char nextChar {};
    for (int i {}; i < strInput.length(); i++) {
      nextChar == 
    }
  }

  return 0;
}
