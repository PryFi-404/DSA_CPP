#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Please enter the time u want the output: ";
    cin >> n;
    for(int i = 0 ; i < n; i++){
        char ch = 'A' + (n-i -1);
        for (int j = 0; j < i + 1; j++){
            cout << ch << " | ";

        } cout << endl;
    }
    return 0;
}