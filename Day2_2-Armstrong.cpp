#include<iostream>
#include<math.h>
using namespace std;

int digitOf(int n){
  int count=0;
  while(n>0){
    count++;
    n/=10;
  }
  return count;
}

int main(){
  int n;
  cin>>n;
  int digit=digitOf(n);
  int n_copy=n;
  int sum=0;
  while(n_copy>0){
    int last_digit=n_copy%10;
    sum+=pow(last_digit,digit);
    n_copy/=10;
  }
  if(sum==n){
    cout<<"Armstrong Number"<<endl;
  }
  else{
    cout<<"Not a Armstrong Number"<<endl;
  }
  return 0;
}
  
