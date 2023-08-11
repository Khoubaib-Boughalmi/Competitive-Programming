#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void updateArray(array<int, 6> &arr, int val, int idx) {
    arr[idx] = val;
}

void displayArray(array<int, 6> arr) {
    for(int x : arr)
        cout << x << ", ";
    cout << std::endl;
}


int main()
{
    array<int, 6> arr= {1,2,3,4,5,6};
    updateArray(arr, 150, 2);
    displayArray(arr);
    sort(arr.begin(), arr.end());
    displayArray(arr);
    return (0);
}