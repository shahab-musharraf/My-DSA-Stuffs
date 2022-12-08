#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the no. of elements: ";
  cin>>n;
  int arr[n];
  cout<<"Now enter the elements: "<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  for(int i=0; i<n/2; i++){
    swap(arr[i],arr[n-(i+1)]);
  }
  
  cout<<"Reversed Array is: "<<endl;
  for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
  }
  
  return 0;
}
  
