#include <bits/stdc++.h>
using namespace std;

int reverse(int x){
    int rev =0;
    while( x > 0){
        int digit = x % 10;
        rev = rev * 10 + digit;
        x = x / 10;
    }
}
int main (){
    int n;
    cin >> n;
    cout << reverse(n);
    return 0;
}