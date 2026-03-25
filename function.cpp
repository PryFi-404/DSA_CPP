#include <bits/stdc++.h>
using namespace std;
// BINOMIAL COEFFICIENT
// int factorial(int n){
//     int fact = 1;
//     for(int i = 1; i <= n ; i++){
//         fact *= i;
//     }
//     return fact;
// }

// int main() {
//     int n,r;
//     cin >> n >> r;
//     long long nCr = factorial(n)/ factorial(r) * factorial(n-r);
//     cout << nCr;
//     return 0;
// }
//----------------------------------------------------------------------------------------------------------------
// PRIME NUMBER CHECKING
    // bool isprime (int n){
    //     if (n <=1 ) return false;
    //     for(int i =2; i*i <=n ;i++){
    //         if (n % i == 0) return false;
    //     }
    //     return true;
    // }
    // int main(){
    //     int n;
    //     cin >> n;
    //     if (isprime(n)){
    //         cout << "prime";
    //     }
    //     else cout << "not prime";
    //     return 0;
    // }
    //----------------------------------------------------------------------------------------------------------------
    // FIBONACCI NUMBER
    int fibonacci(int n){
        if (n == 0) return 0;
        if (n ==1) return 1;
        int a =0, b=1,c;
        for (int i =2; i <= n; i++){
            c=a+b;
            a=b;
            b=c;
        }
        return b;
    }
    int main (){
        int n;
        cin >> n;
        cout << fibonacci(n);
        return 0;
    }
    //----------------------------------------------------------------------------------------------------------------