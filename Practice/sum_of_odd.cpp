#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "please enter ur digit: ";
    cin >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++){ // or increment by 2 i+2
        if ( i % 2 != 0){
        sum += i;
        }
    }
    cout << "ur desired sum is : " << sum;
    return 0;
    return 0;
}