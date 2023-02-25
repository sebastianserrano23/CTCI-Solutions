// check permutation, ask if it is case-sensitive, "God" -> "dog"
// ask if whitespce is significant, "god   " -> "dog"
#include <iostream>
#include <algorithm>
using std::string;

bool permutation(string s, string t){
    if(s.size() != t.size()){
        return false;
    }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    if(s == t)
        return true;
    else
        return false;
}

// if you want a more efficient way of writing the algorithm:
bool permutation(string s, string t){
    if(s.size() != t.size()){
        return false;
    }
    int letters[128]; //assume it is an ASCII string
    for(size_t i = 0; i < s.size(); i++){
        letters[s[i]]++; 
    }

    for(size_t i = 0; i < t.size(); i++){
        letters[t[i]]--; // this decrements when the loop finds a letter that is already in the array
        if(letters[t[i]] < 0)
            return false;
    }
    return true; // letter has no negtative values, and therefore no positive values either
}