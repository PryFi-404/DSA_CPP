#include <bits/stdc++.h>
using namespace std;

void SumProduct(int arr[], int n){
    int sum = 0;
    int mul = 1;

    for (int i = 0;i < n; i++){
        sum += arr[i];
        mul *= arr[i];
    }
    cout << "Sum: " << sum << endl;
    cout << "Product: " << mul << endl;
}
int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i<n; i++){
        cin >> arr[i];
    }
    SumProduct(arr, n);
    return 0;
}