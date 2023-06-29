#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;       // row size
    int *colArr = new int[n];       // array to store col size for each row
    int **arr = new int*[n];        // array of row size containing pointer to each row's column
    for(int i=0; i<n; i++) {
        cout << "enter col size: " ;
        cin >> colArr[i];           // storing col size into colArr for further work
        arr[i] = new int[colArr[i]];        // declaring array to each column
    }
    
    // input
    for(int i=0; i<n; i++) {
        for(int j=0; j<colArr[i]; j++) {
            cin >> arr[i][j];
        }
    }
    
    // output
    for(int i=0; i<n; i++) {
        for(int j=0; j<colArr[i]; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    // releasing memory
    for(int i=0; i<n; i++) {
        delete [] arr[i];
    }
    delete [] arr;
    delete [] colArr;

    return 0;
    
    
}
