#include<iostream>

using namespace std;
int main(){

  int n;
  cout<<"Enter the no. of elements: ";
  cin>>n;
  int arr[n];
  cout<<"Now Enter the elements:"<<endl;
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  
  int maxi=arr[0];
  
  for(int i=1; i<n; i++){
    maxi=max(maxi,arr[i]);
  }
  cout<<"Maximum of these is: "<<maxi<<endl;
  return 0;
}
