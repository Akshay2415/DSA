#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted halves
void merge(vector<int> &arr, int low, int mid, int high) {
    vector<int> temp;

    int left = low;
    int right = mid + 1;

    // Compare elements from both halves
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy merged elements back into original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
}

// Recursive Merge Sort function
void mergeSort(vector<int> &arr, int low, int high) {
    if (low >= high)
        return;

    int mid = (low + high) / 2;

    mergeSort(arr, low, mid);       // Sort left half
    mergeSort(arr, mid + 1, high);  // Sort right half

    merge(arr, low, mid, high);     // Merge both halves
}

int main() {
    vector<int> arr = {5, 2, 8, 1, 9, 3};

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}