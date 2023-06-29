#include <iostream>

using namespace std;

int main()
{
    cout << "Enter size: ";
    int n;
    cin >> n;
    int *arr = new int[n];
    
    cout <<"Enter elements: " ;
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    
    
    cout << "Your entered elements: " << endl;
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }cout << endl;
    
    char ch;
    cout << "Want to increase size ? (y/n) ";
    cin >> ch;
    
    while(ch == 'y') {
        int size;
        cout << "Enter the new size: " ;
        cin >> size;
        
        int *q = new int[size];
        for(int i=0; i<size; i++) {
            q[i] = arr[i];
        }
        
        delete arr;
        arr = q;
        q = NULL;
        
        
        cout << "Enter remaining elements: ";
        int remaining = size-n;
        int index = n;
        while(remaining > 0) {
            cin >> arr[index++];
            remaining --;
        }
        
        
        
        
        cout << "Your new array is: " << endl;
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        
        cout << "Want to increase size ? (y/n) ";
        cin >> ch;
        n = size;
        
    }
    
    
    return 0;
    
    
}
