#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;

int lengthOfLongestSubstring(const string& s)
 {
    if (s.empty()) {
        return 0;
    }

    unordered_map<char, int> charMap;
    int maxLength = 0; 
    int left = 0;      

    for (int right = 0; right < s.length(); ++right) {
        char currentChar = s[right];
        if (charMap.count(currentChar) && charMap[currentChar] >= left) {
            left = charMap[currentChar] + 1;
        }

        charMap[currentChar] = right;
        maxLength =max(maxLength, right - left + 1);
    }
    return maxLength;
}

int main() {
    // Test cases
    std::string testCases[] = {
        "abcabcbb",
        "bbbbb",
        "pwwkew",
        "abcdefgh",
        "a"
    };

    // Edge cases
    string edgeCases[] = {
        "",       
        "abacada"  
    };
    
    cout << "--- Test Cases ---" <<endl;
    for (const auto& s : testCases) {
        cout << "Input: \"" << s << "\", Output: " << lengthOfLongestSubstring(s) <<endl;
    }

    cout << "\n--- Edge Cases ---" <<endl;
    for (const auto& s : edgeCases) {
        cout << "Input: \"" << s << "\", Output: " << lengthOfLongestSubstring(s) <<endl;
    }
    
    return 0;
}
