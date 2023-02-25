#include <iostream>
#include <string>
#include <unordered_set>
using std::unordered_set;
using std::string;

bool isUnique(const std::string& str){
    // asumming it is an ASCII string
    if(str.size() > 128)
        return false;
    // using unordered map as a hashmap
    std::unordered_set<char> chars;
    for (char c = 0; c < str.size(); c++) {
        if(chars.find(c) != chars.end()){
            return false;
        }
        chars.insert(c);
    }
    return true;
}

// if I'm not able to use additional data structure

bool isUnique(string str){
    int checker = 0;
    for(char c = 0; c < str.size(); c++){
        int val = str[c];
        if((checker & (1 << val)) > 0){
            return false;
        }
        checker |= (1 << val);
    }
    return true;
}