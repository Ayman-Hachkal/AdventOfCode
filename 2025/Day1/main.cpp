#include <ios>
#include <iostream>
#include <fstream>
#include <iostream>

int main() {
  std::ifstream inf{"resources/inputtest.txt"};

  if (!inf) {
    std::cout << "Error";
    return 1;
  }

  int currentPosition{50};
  int passcode{0};

  std::string strRotate{};

  while (inf >> strRotate){
    //Get the direction
    char letter{strRotate[0]};
    std::cout << strRotate << "\n";

    std::string rotateCountString{};
    for (int i{1}; i < strRotate.size(); i++){
      rotateCountString += strRotate[i];
    }
    int rotateCount{std::stoi(rotateCountString)};

    int zeroCheck {currentPosition};
    if (letter == 'R') { 
      currentPosition += rotateCount;
    }
    else if (letter == 'L') { 
      currentPosition -= rotateCount;
    }

    while (currentPosition >= 100 || currentPosition < 0) {
      int before {currentPosition};
      if (currentPosition > 99) {
        currentPosition = currentPosition - 100;
        passcode++;
      } else if (currentPosition < 0) {
        currentPosition = currentPosition + 100;
        passcode++;
      }
    }
    if 
  }
  std::cout << "Passcode = "<< passcode << "\n";

  return 0;
}
