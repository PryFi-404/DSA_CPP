#include <bits/stdc++.h>
using namespace std;

void SwapMinMax(int arr[], int n){
    int min = 0;
    int max = 0;

    for(int i = 1; i < n; i++){   
        if (arr[i] < arr[min]){
            min = i;
        }
        if (arr[i] > arr[max]){
            max = i;
        }
    }

    swap(arr[max], arr[min]);
}

int main(){
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    SwapMinMax(arr, n);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}