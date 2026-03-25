#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i<=n; i++){
        int t = n%i;
        if(t==0){
            cout<< i << " ";
        }
    }
    return 0;
}