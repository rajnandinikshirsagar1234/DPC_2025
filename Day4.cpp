#include<iostream>
#include <bits/stdc++.h>
using namespace std;

void mergeArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int i = m - 1; 
    int j = 0;     

    while (i >= 0 && j < n && arr1[i] > arr2[j]) {
        swap(arr1[i], arr2[j]);
        i--;
        j++;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
}

int main() {
    // Test Case 1
    vector<int> arr1 = {1, 3, 5}, arr2 = {2, 4, 6};
    mergeArrays(arr1, arr2, arr1.size(), arr2.size());
    cout << "Test Case 1:\narr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
    cout << "\n\n";

    // Test Case 2
    arr1 = {10, 12, 14}, arr2 = {1, 3, 5};
    mergeArrays(arr1, arr2, arr1.size(), arr2.size());
    cout << "Test Case 2:\narr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
    cout << "\n\n";

    // Test Case 3
    arr1 = {2, 3, 8}, arr2 = {4, 6, 10};
    mergeArrays(arr1, arr2, arr1.size(), arr2.size());
    cout << "Test Case 3:\narr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
    cout << "\n\n";

    // Test Case 4
    arr1 = {1}, arr2 = {2};
    mergeArrays(arr1, arr2, arr1.size(), arr2.size());
    cout << "Test Case 4:\narr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
    cout << "\n\n";

    // Test Case 5 (example with smaller input, works the same for large arrays)
    arr1.clear();
    arr2.clear();
    for (int i = 1; i <= 6; i++) arr1.push_back(i);     // [1..6]
    for (int i = 5; i <= 10; i++) arr2.push_back(i);    // [5..10]
    mergeArrays(arr1, arr2, arr1.size(), arr2.size());
    cout << "Test Case 5:\narr1 = ";
    for (int x : arr1) cout << x << " ";
    cout << "\narr2 = ";
    for (int x : arr2) cout << x << " ";
    cout << "\n";

    return 0;
}
