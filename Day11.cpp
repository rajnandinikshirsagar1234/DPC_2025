#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

void permute(string &s, int l, int r, set<string> &ans) {
    if (l == r) {
        ans.insert(s); 
        return;
    }
    for (int i = l; i <= r; i++) {
        swap(s[l], s[i]);        
        permute(s, l + 1, r, ans); 
        swap(s[l], s[i]);        
    }
}


vector<string> uniquePermutations(string s) {
    set<string> ans;   
    permute(s, 0, s.length() - 1, ans);
    return vector<string>(ans.begin(), ans.end());
}

int main() {
    vector<string> testCases = {"abc", "aab", "aaa", "a", "abcd"};

    for (string s : testCases) {
        vector<string> perms = uniquePermutations(s);
        cout << "Input: \"" << s << "\"\nOutput: [";
        for (size_t i = 0; i < perms.size(); i++) {
            cout << "\"" << perms[i] << "\"";
            if (i != perms.size() - 1) cout << ", ";
        }
        cout << "]\n\n";
    }

    return 0;
}
