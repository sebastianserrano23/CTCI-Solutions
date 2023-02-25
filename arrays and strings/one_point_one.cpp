#include <iostream>
#include <string>
#include <unordered_set>
using std::unordered_set;

bool isUnique(const std::string& str){
    // assuming the string is an ASCII string
    if(str.size() > 128){
        return false;
    }

    std::unordered_set<char> chars;
    for (char c = 0; c < str.size(); c++) {
        int val = str[c];
        if(chars.find(c) != chars.end()){
            return false;
        }
        chars.insert(c);
    }
    return true;
}

