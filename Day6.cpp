#include<iostream>
#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> findZeroSumSubarrays(vector<int>& arr) {
    int n = arr.size();
    vector<pair<int,int>> result;
    unordered_map<long long, vector<int>> map; 
    long long prefixSum = 0;

    for (int i = 0; i < n; i++) {
        prefixSum += arr[i];

        if (prefixSum == 0) {
            result.push_back({0, i});
        }

        if (map.find(prefixSum) != map.end()) {
            for (auto startIndex : map[prefixSum]) {
                result.push_back({startIndex + 1, i});
            }
        }

        map[prefixSum].push_back(i);
    }

    return result;
}

int main() {
    vector<vector<int>> testCases = {{1, 2, -3, 3, -1, 2},{4, -1, -3, 1, 2, -1},{1, 2, 3, 4},{0, 0, 0},{-3, 1, 2, -3, 4, 0},
};

    for (auto arr : testCases) {
        auto ans = findZeroSumSubarrays(arr);
        cout << "Input: ";
        for (int x : arr) cout << x << " ";
        cout << "\nOutput: ";
        if (ans.empty()) cout << "[]";
        for (auto &p : ans) cout << "(" << p.first << ", " << p.second << ") ";
        cout << "\n\n";
    }
    return 0;
}
