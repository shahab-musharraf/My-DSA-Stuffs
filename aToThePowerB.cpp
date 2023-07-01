#include <iostream>

using namespace std;

int getA2B(int a, int b) {
    if ( b==0 ) {
        return 1;
    }
    if ( b==1 ) {
        return a;
    }
    
    int halfPower = getA2B(a, b/2);
    
    if(b&1) {
        // b is odd
        return a*halfPower*halfPower;
    }
    else {
        // b is even
        return halfPower*halfPower;
    }
}

int main()
{
    int a, b, ans;
    
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    
    ans = getA2B(a, b);
    
    cout << "a to the power b is: " << ans << endl;
    return 0;
}
