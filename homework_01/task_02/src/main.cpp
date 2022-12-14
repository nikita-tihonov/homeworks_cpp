#include <iostream>

#include <utils.cpp>

int main() {
  std::string data;
  std::getline(std::cin, data);
  std::cout << Calculate(data);
  return 0;
}
