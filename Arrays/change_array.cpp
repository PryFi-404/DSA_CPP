#include <bits/stdc++.h>
using namespace std;
void ChangeArr(int arr[], int n){
    for (int i = 0; i<n; i++){
        arr[i]=2*arr[i];
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    ChangeArr(arr,5);
    for (int i = 0; i<5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}