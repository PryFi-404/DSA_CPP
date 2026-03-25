#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cout << "please enter ur digit: ";
    cin >> n;

    int sum = 0;

    for (int i = 0; i <= n; i++){
        sum += i;
    }
    cout << "ur desired sum is : " << sum;
    return 0;
}