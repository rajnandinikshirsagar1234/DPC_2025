#include <iostream>
#include <vector>
using namespace std;

int findMissing(vector<int>& arr, int n) {
    long long total = (1LL*n*(n+1))/2;  
    long long sum = 0;
    for (int i = 0; i < n-1; i++) {
        sum += arr[i];
    }
    return (int)(total-sum);
}

int main() {
    // Test Case 1
    vector<int> arr1 = {1, 2, 4, 5};
    std::cout << "The Missing number is: " <<findMissing(arr1, arr1.size() + 1) <<std::endl;

    // Test Case 2
    vector<int> arr2 = {2, 3, 4, 5};
   std::cout << "The Missing number is: " <<findMissing(arr2, arr2.size() + 1) <<std::endl;

    // Test Case 3
    vector<int> arr3 = {1, 2, 3, 4};
    std::cout <<"The Missing number is: " <<findMissing(arr3, arr3.size() + 1) <<std::endl;

    // Test Case 4
    vector<int> arr4 = {1};
    std::cout << "The Missing number is: " <<findMissing(arr4, arr4.size() + 1) <<std::endl;

    // Test Case 5 
    int n = 1000000;
    vector<int> arr5;
    arr5.reserve(n - 1);
    for (int i = 1; i < n; i++) { // missing last number (1000000)
        arr5.push_back(i);
    }
    std::cout << "Test Missing number is: " <<findMissing(arr5, n) <<std::endl;
    return 0;
}
