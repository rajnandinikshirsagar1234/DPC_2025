#include <iostream>
using namespace std;

void findLeaders(int arr[], int n) {
    int leaders[n];   
    int count = 0;   

    
    int maxFromRight = arr[n-1];
    leaders[count++] = maxFromRight;

    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > maxFromRight) {
            maxFromRight = arr[i];
            leaders[count++] = arr[i];
        }
    }
    cout << "Leaders: ";
    for (int i = count-1; i >= 0; i--) {
        cout << leaders[i] << " ";
    }
    cout << endl;
}

int main() {
    // Test cases
    int arr1[] = {16, 17, 4, 3, 5, 2};
    int arr2[] = {1, 2, 3, 4, 0};
    int arr3[] = {7, 10, 4, 10, 6, 5, 2};
    int arr4[] = {5};
    int arr5[] = {100, 50, 20, 10};
    int arr6[] = {1, 2, 3, 4, 5, 6, 7, 1000000};

    findLeaders(arr1, 6);
    findLeaders(arr2, 5);
    findLeaders(arr3, 7);
    findLeaders(arr4, 1);
    findLeaders(arr5, 4);
    findLeaders(arr6, 8);

    return 0;
}
