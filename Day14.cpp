#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long atMostKDistinct(string s, int k) {
        int n = s.size();
        long long count = 0;
        unordered_map<char, int> freq;
        int left = 0;

        for (int right = 0; right < n; right++) {
            freq[s[right]]++;

    
            while ((int)freq.size() > k) {
                freq[s[left]]--;
                if (freq[s[left]] == 0) {
                    freq.erase(s[left]);
                }
                left++;
            }

            count += (right - left + 1);
        }
        return count;
    }

    long long countExactlyKDistinct(string s, int k) {
        if (k > s.size()) return 0; 
        return atMostKDistinct(s, k) - atMostKDistinct(s, k - 1);
    }
};

int main() {
    Solution sol;
    
    // Test cases
    cout << sol.countExactlyKDistinct("pqpqs", 2) << endl;       
    cout << sol.countExactlyKDistinct("aabacbebebe", 3) << endl; 
    cout << sol.countExactlyKDistinct("a", 1) << endl;           
    cout << sol.countExactlyKDistinct("abc", 3) << endl;        
    cout << sol.countExactlyKDistinct("abc", 2) << endl;      
    cout << sol.countExactlyKDistinct("aaaa", 1) << endl;   
  
    return 0;
}
