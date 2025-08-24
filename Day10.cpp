#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for (string s : strs)
         {
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
            }

            string key = "";
            for (int i = 0; i < 26; i++) {
                key += "#" + to_string(freq[i]);
            }

            m[key].push_back(s);
        }

        vector<vector<string>> result;
        for (auto &entry : m) {
            result.push_back(entry.second);
        }
        return result;
    }
};

int main() {
    Solution sol;

    // Test Case 1
    vector<string> strs1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
    auto ans1 = sol.groupAnagrams(strs1);
    cout << "Output 1: ";
    for (auto &group : ans1) {
        cout << "[";
        for (auto &word : group) cout << word << " ";
        cout << "] ";
    }
    cout << endl;

    // Test Case 2
    vector<string> strs2 = {""};
    auto ans2 = sol.groupAnagrams(strs2);
    cout << "Output 2: ";
    for (auto &group : ans2) {
        cout << "[";
        for (auto &word : group) cout << word << " ";
        cout << "] ";
    }
    cout << endl;

    // Test Case 3
    vector<string> strs3 = {"a"};
    auto ans3 = sol.groupAnagrams(strs3);
    cout << "Output 3: ";
    for (auto &group : ans3) {
        cout << "[";
        for (auto &word : group) cout << word << " ";
        cout << "] ";
    }
    cout << endl;

    // Test Case 4
    vector<string> strs4 = {"abc", "bca", "cab", "xyz", "zyx", "yxz"};
    auto ans4 = sol.groupAnagrams(strs4);
    cout << "Output 4: ";
    for (auto &group : ans4) {
        cout << "[";
        for (auto &word : group) cout << word << " ";
        cout << "] ";
    }
    cout << endl;

    // Test Case 5
    vector<string> strs5 = {"abc", "def", "ghi"};
    auto ans5 = sol.groupAnagrams(strs5);
    cout << "Output 5: ";
    for (auto &group : ans5) {
        cout << "[";
        for (auto &word : group) cout << word << " ";
        cout << "] ";
    }
    cout << endl;

    return 0;
}
