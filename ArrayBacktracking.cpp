#include <iostream>

using namespace std;

void backtrackArray(int *arr, int n, int idx) {
    if(idx > n) {
        return;
    }
    
    arr[idx-1] = idx;
    backtrackArray(arr, n, idx+1);
    arr[idx-1] = idx-2;
    cout << "Backtrack ho gya bhaiya!" << endl;
}

void printArr(int* arr, int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n] = {0};
    int idx = 1;
    
    backtrackArray(arr, n, idx);
    
    printArr(arr, n);

    return 0;
}
