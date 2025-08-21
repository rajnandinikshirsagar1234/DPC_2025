#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height) {
    int n = height.size();
    if (n < 3) return 0; 

    vector<int> leftMax(n), rightMax(n);

    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i-1], height[i]);

    rightMax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--)
        rightMax[i] = max(rightMax[i+1], height[i]);

    int trappedWater = 0;
    for (int i = 0; i < n; i++) {
        int water = min(leftMax[i], rightMax[i]) - height[i];
        if (water > 0)
            trappedWater += water;
    }

    return trappedWater;
}

int main() {
    vector<vector<int>> tests = {
        {0,1,0,2,1,0,1,3,2,1,2,1}, 
        {4,2,0,3,2,5},             
        {1,1,1},                 
        {5},                       
        {2,0,2},                   
    };

    for (auto &height : tests) {
        cout << "Input: ";
        for (int h : height) cout << h << " ";
        cout << "\nOutput: " << trap(height) << "\n\n";
    }

    return 0;
}
