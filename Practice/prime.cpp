#include <bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin>>n;
    bool isPrime = true;
    for(int i =2; i <= n-1; i++){
        if(n%i == 0){ // the value of i is increasing from 2 tp n-1
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout << "prime \n";
    } else{
        cout<< "non prime \n";
        return 0;
    }
}