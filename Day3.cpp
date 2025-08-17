#include <iostream>
#include <vector>
#include<stdio.h>
using namespace std;

int findDuplicate(vector<int>& arr) {
    int slow = arr[0];
    int fast = arr[0];

    do {
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);

    slow = arr[0];  
    while (slow != fast) {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow; 
}

int main() {
    // Test Case 1
    vector<int> arr1 = {1, 3, 4, 2, 2};
    std:: cout << "Duplicate number is: " << findDuplicate(arr1) <<std::endl;

    // Test Case 2
    vector<int> arr2 = {3, 1, 3, 4, 2};
    std::cout << "Duplicate number is: " << findDuplicate(arr2) <<std::endl;

    // Test Case 3
    vector<int> arr3 = {1, 1};
    std::cout << "Duplicate number is: " << findDuplicate(arr3) <<std::endl;

    // Test Case 4
    vector<int> arr4 = {1, 4, 4, 2, 3};
    std::cout << "Duplicate number is: " << findDuplicate(arr4) << std::endl;

    // Test Case 5 (large n example)
    vector<int> arr5;
    int n = 100000; 
    for (int i = 1; i <= n; i++) arr5.push_back(i);
    arr5.push_back(50000); // duplicate
    std::cout << "Duplicate number is: " << findDuplicate(arr5) <<std::endl;

    return 0;
}
