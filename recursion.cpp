#include <bits/stdc++.h>
using namespace std;

// RECURSION * PATTERN
    void star( int n){
        if (n == 0) return;
        cout << "* ";
        star(n-1);
    }
    void reverse( int n ){
        if(n ==0) return;
        star(n);
        cout << endl;
        reverse (n-1);

    }
    int main(){
        int n;
        cin >> n ;
        reverse(n);
    }

