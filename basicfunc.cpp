#include<iostream>

using namespace std;

void getArr(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cin >> arr[i];
    }
}

void printArr(int arr[], int size) {
    for (size_t i = 0; i < size; i++) {
        cout << arr[i];
    }
}

void reverseArr(int arr[], int size) {
    for (size_t i = 0; i < size/2; i++) {
        swap(arr[i], arr[size - i - 1]);
    }
}

int maxArr(int arr[], int size) {
    int maxNum = INT_MIN;
    for (size_t i = 0; i < size; i++) {
        maxNum = max(maxNum, arr[i]);
    }
    return maxNum;
}

int minArr(int arr[], int size) {
    int minNum = INT_MAX;
    for (size_t i = 0; i < size; i++) {
        minNum = min(minNum, arr[i]);
    }
    return minNum;
}

int searchNum(int arr[], int size, int key) {
    for (size_t i = 0; i < size; i++) {
        if (arr[i] == key) return i;
    }
    return -1;
}



int main () {
    int arr[5] = {1,2,3,4,5};
    reverseArr(arr, 5);
    printArr(arr, 5);
    return 0;
}