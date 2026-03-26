#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Please enter the time u want the output: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        int num = i + 1;
        for (int j = 0; j < i + 1; j++){
            cout << num << " | ";
        }
        cout << endl;
    }
    return 0;
}