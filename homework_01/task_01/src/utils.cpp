#include "utils.hpp"

#include <stack>

std::vector<std::string> SplitString(const std::string& data) {
  std::vector<std::string>res;
  std::string w = "";
  int k = 0;
  for (auto c : data) {
    if (c == '(') {
      k++;
      w += c;
      continue;
    }
    if (c == ')') {
      k--;
      w += c;
      continue;
    }
    if (k == 0) {
if ((c != '\t') && (c != ' ')) {
        w += c;
      } else {
        if (!w.empty()) {
          res.push_back(w);
          w = "";
        }
      }
    } else {
      w += c;
    }
  }
  if (!w.empty()) {
    res.push_back(w);
  }
  return res;

}
