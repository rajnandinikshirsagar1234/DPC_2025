#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) return "";   

    for (int i = 0; i < strs[0].size(); i++) {
        char ch = strs[0][i];  
        for (int j = 1; j < strs.size(); j++) {
            if (i >= strs[j].size() || strs[j][i] != ch) {
                return strs[0].substr(0, i); 
            }
        }
    }
    return strs[0]; 
}

int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};
    cout << "Input: [flower, flow, flight]\nOutput: " 
         << "\"" << longestCommonPrefix(strs1) << "\"\n\n";  

    vector<string> strs2 = {"dog", "racecar", "car"};
    cout << "Input: [dog, racecar, car]\nOutput: " 
         << "\"" << longestCommonPrefix(strs2) << "\"\n\n";  

    
    vector<string> strs3 = {"apple", "ape", "april"};
    cout << "Input: [apple, ape, april]\nOutput: " 
         << "\"" << longestCommonPrefix(strs3) << "\"\n\n";  

    
    vector<string> strs4 = {""};
    cout << "Input: [\"\"]\nOutput: " 
         << "\"" << longestCommonPrefix(strs4) << "\"\n\n";  


    vector<string> strs5 = {"alone"};
    cout << "Input: [alone]\nOutput: " 
         << "\"" << longestCommonPrefix(strs5) << "\"\n\n";  

    
    vector<string> strs6 = {};
    cout << "Input: []\nOutput: " 
         << "\"" << longestCommonPrefix(strs6) << "\"\n\n";  

    return 0;
}
