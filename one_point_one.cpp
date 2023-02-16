#include <iostream>
#include <string>
#include <unordered_set>

bool isUnique(const std::string& str){
    std::unordered_set<char> chars;
    for (char c : str) {
        if(chars.find(c) != chars.end()){
            return false;
        }
        chars.insert(c);
    }
    return true;
}
