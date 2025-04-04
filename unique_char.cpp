#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int firstUniqChar(string s) {
    unordered_map<char, int> charCount;
    
    
    for (char c : s) {
        charCount[c]++;
    }
    
    
    for (int i = 0; i < s.length(); i++) {
        if (charCount[s[i]] == 1) {
            return i;
        }
    }
    
    return -1; // No unique character found
}

int main() {
    string s = "leetcode";
    cout << "First unique character index: " << firstUniqChar(s) << endl;
    return 0;
}
