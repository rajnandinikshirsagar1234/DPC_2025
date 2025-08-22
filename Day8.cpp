#include<iostream>
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {

    stringstream ss(s);
    string word;
    vector<string> words;
    
    while (ss >> word) { 
        words.push_back(word);
    }
    
    reverse(words.begin(), words.end());
    
    string result;
    for (int i = 0; i < words.size(); i++) {
        result += words[i];
        if (i != words.size() - 1) result += " ";
    }
    
    return result;
}

int main() {
    // Test cases
    vector<string> tests = {
        "the sky is blue",
        "  hello world  ",
        "a good   example",
        "    ",
        "word"
    };

    for (string t : tests) {
        cout << "Input: \"" << t << "\"" << endl;
        cout << "Output: \"" << reverseWords(t) << "\"" << endl;
        cout << "------------------" << endl;
    }

    return 0;
}
