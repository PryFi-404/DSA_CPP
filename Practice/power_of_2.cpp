#include <bits/stdc++.h>
using namespace std;

    int powerof2(int n){
        if (n == 0) return false;
        return (n & (n - 1)) == 0;
    } 
    int main(){
        int n;
        cin >> n;
        if (powerof2(n))
        cout << n << " is a power of 2." << endl;
        else
        cout << n << " is not a power of 2." << endl;
    return 0;
}