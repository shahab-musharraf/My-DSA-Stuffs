#include<iostream>
#include<string>
using namespace std;

int character(char ch){
    switch (ch)
    {
    case 'X':
        return 10;
        break;

    case 'V':
        return 5;
        break;
    case 'I':
        return 1;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    
    case 'v':
        return 5;
        break;
    case 'i':
        return 1;
        break;
    case 'x':
        return 10;
        break;
    case 'l':
        return 50;
        break;
    case 'c':
        return 100;
        break;
    case 'd':
        return 500;
        break;
    case 'm':
        return 1000;
        break;
    
    
    default:
        return 0;
        break;
    }
}
int main(){
    string str;
    cout<<"Enter a Roman Number: ";         //Taking a Roman Number as an input
    cin>>str;
    int n=str.length();
    int ans=0;
    int arr[n+1];
    arr[0]=-1;
    int count =1;
    for (int i = 0; i < n; i++)             //Storing value of each character in an temporary array
    {
        int value=character(str[i]);
        arr[count]=value;
        count++;
    }


    for (int i=n; i >0; i--)                //Finding the decimal value
    {
        if(arr[i]>arr[i-1]){
            ans+=arr[i];
        }
        else{
            ans-=arr[i];
        }
    }
    
    cout<<"The Decimal Value of "<<str<<" is "<<ans<<endl;
    
}
