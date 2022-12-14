#include "utils.hpp"

#include <stack>

std::vector<std::string> SplitString(const std::string& data, char symbol) {
  std::vector<std::string>res;
  std::string w = "";
  for (auto c : data) {
          if (c != symbol) {
                  w += c;
        } else {
                if (!w.empty()) {
                        res.push_back(w);
                        w = "";
                }
        }
        }
          if (!w.empty()) {
                  res.push_back(w);
        }
          return res;
}



int Calculate(const std::string& data) {
  char symbol;
        for (auto c : data) {
                if (c == '+') {symbol = '+';}
                if (c == '-') {symbol = '-';}
                if (c == '*') {symbol = '*';}
        }
        std::vector<std::string> vec;
        vec = SplitString(data, symbol);
        if (symbol == '+') {
                return std::stoi(vec[0]) + std::stoi(vec[1]);
        }
        if (symbol == '-') {
                return std::stoi(vec[0]) - std::stoi(vec[1]);
        }
        if (symbol == '*') {
                return std::stoi(vec[0]) * std::stoi(vec[1]);
        }

}


