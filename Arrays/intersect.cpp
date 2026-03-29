#include <bits/stdc++.h>
using namespace std;

void Intersect(int arr1[], int n1, int arr2[], int n2){
    for (int i = 0; i < n1; i++){
        for (int j = 0 ; j < n2; j++){
            if(arr1[i] == arr2[j]){
                cout << arr1[i] << " ";
                    break;
            }
        }
    }
}
int main(){
    int n1, n2;
    cin >> n1 >> n2;

    int arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++){
        cin >> arr1[i];
    }
    for (int j = 0; j < n2; j++){
        cin >> arr2[j];
    }

    Intersect(arr1, n1, arr2, n2);
    return 0;
}