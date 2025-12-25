#include <exception>
#include <ios>
#include <fstream>
#include <iostream>

int main() {
  std::ifstream inf{"resources/input.txt"};

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

    std::string rotateCountString{};
    for (int i{1}; i < strRotate.size(); i++){
      rotateCountString += strRotate[i];
    }

    int rotateCount{std::stoi(rotateCountString)};
    bool trackOne {false};
    bool track99 {false};

    for (int i {0}; i < abs(rotateCount); i++) {
      if (letter == 'R') {
        currentPosition++;
        if (currentPosition > 99) {
          currentPosition = 0;
        }
      }
      else {
        currentPosition--;
        if (currentPosition < 0) {
          currentPosition = 99;
        }
      }
      if (currentPosition == 0) {
        passcode++;
      }
    }
  }
  std::cout << "Passcode = "<< passcode << "\n";

  return 0;
}


