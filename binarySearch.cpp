#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        int n = arr.size();

        int index;
        int left = 0 , right = n-1;
        while (left <= right) {
            int mid = left + (right - left)/2;
            if (arr[mid] < arr[mid-1]) {
                right = mid - 1;
            } else if (arr[mid] < arr[mid+1]) {
                left = mid + 1;              
            } else {
                return mid;
            }
        }
    }
};

int binSearch(int arr[], int n, int key) {
    int left = 0 , right = n-1;

    while (left <= right) {
        int mid = left + (right - left)/2;

        if (arr[mid] == key) return mid;

        if (arr[mid] < key) {
            left = mid + 1;
            continue;
        } else {
            right = mid - 1;
            continue;
        }
    }
    return -1;
}

int main () {
    int arr[4] = {3, 9, 17, 51};
    cout<<binSearch(arr, 4, 51);
    return 0;
}