#include <iostream>
#include <vector>
using namespace std;

void sort012(vector<int> &arr)
 {
  int count0 = 0, count1 = 0, count2 = 0;
    for (int num : arr) {
        if (num == 0) count0++;
        else if (num == 1) count1++;
        else count2++;
    }

    int index = 0;
    while (count0--) arr[index++] = 0;
    while (count1--) arr[index++] = 1;
    while (count2--) arr[index++] = 2;
}

int main() {
    vector<int> arr = {0, 1, 2, 1, 0, 2, 1, 0};
    sort012(arr);
    for (int num : arr) {
        cout << num << " ";
    }
    return 0;
}
