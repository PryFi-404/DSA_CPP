#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout <<"Enter your number: ";
    cin >> n;
    int sum =0;
    for (int i = 3; i <= n; i+3){
        sum += i;
    }
    cout << "sum of numbers which are divisible by 3 is: " << sum;
    return 0;
}

    // int n;
    // cout <<"Enter your number: ";
    // cin >> n;
    // int sum = 0;
    // int i = 1;
    // while( i <= n){
    //     if(i % 3 == 0){
    //         sum += i;
    //     }
    //     i++; // never forget this increment because otherwise the loop willstuck in infinite loop which will print 1
    // } 
    // cout << "sum of numbers which are divisible by 3 is: " << sum;