#include <bits/stdc++.h>
using namespace std;

int main() {
    /*int low = 0, high = n-1 
    while (low <= high){
    int mid = (low+high) /n}
    if (arr[mid]==target) return mid;
    else if(arr[mid]>= arr[0] && target < arr[0]) low = mid +1;
    else if(arr[mid] < arr[0] && target >= arr[0]) high = mid -1;
    else if(arr[mid]> target) high = mid -1;
    else low = mid +1;
    */
    //--------------------------------------------------------------------------------------
    // int n, i;
    // cin >> n >> i;
    // if ((n & (1<<i)) >0)
    // cout << " ith bit is on";
    // else 
    // cout << "ith bit is off";
    //--------------------------------------------------------------------------------------
    // int be (int a , int b){
    //     int ans =1;
    //     while (b>0)
    // }
    //  if (b % 2==1){
    //     a = a*a;
    //     b =(b >> 1);
    //  }
    //  return ans;
    //------------------------------------------------------------------------------------
    // SUM OF N NUMBERS
    // int n;
    // cout << "please enter ur digit: ";
    // cin >> n;

    // int sum = 0;

    // for (int i = 0; i <= n; i++){
    //     sum += i;
    // }
    // cout << "ur desired sum is : " << sum;
    // return 0;
    //-------------------------------------------------------------------------------------
    // SUM OF DESIRED ODD NUMBER
    // int n;
    // cout << "please enter ur digit: ";
    // cin >> n;

    // int sum = 0;

    // for (int i = 0; i <= n; i++){ // or increment by 2 i+2
    //     if ( i % 2 != 0){
    //     sum += i;
    //     }
    // }
    // cout << "ur desired sum is : " << sum;
    // return 0;
    //----------------------------------------------------------------------------------------
    //I+2
    // int n;
    // cout << "please enter ur digit: ";
    // cin >> n;

    // int sum = 0;

    // for (int i = 1; i <= n; i+=2){ // i+=2 and i=1 for odd and i=0 for even 
    //     sum += i;
        
    // }
    // cout << "ur desired sum is : " << sum;
    //--------------------------------------------------------------------------------------------
    // FROM WHILE LOOP
    // int n;
    // cout << "please enter ur digit: ";
    // cin >> n;

    // int sum = 0;
    // int i;
    // while(i <= n){
    //     sum += i;
    // }
    // cout << "ur desired sum is : " << sum;
    //-------------------------------------------------------------------------------------------------
    //DO WHILE LOOP
    // int n = 10 ;
    // int i = 1;
    // do{
    //     cout << i << " ";
    //     i++;
    // } while (i <= n);
    // cout << endl;
    //---------------------------------------------------------------------------------------------
    //CHECK IF ITS PRIME OR NOT
    //int n;
    // cin>>n;
    // bool isPrime = true;
    // for(int i =2; i <= n-1; i++){
    //     if(n%i == 0){ // the value of i is increasing from 2 tp n-1
    //         isPrime = false;
    //         break;
    //     }
    // }
    // if (isPrime == true){
    //     cout << "prime \n";
    // } else{
    //     cout<< "non prime \n";
    // }
    //-------------------------------------------------------------------------------------------------------
    // SUM OF NO WHICH ARE DIVISIBLE BY 3
    // int n;
    // cout <<"Enter your number: ";
    // cin >> n;
    // int sum =0;
    // for (int i = 3; i <= n; i+3){
    //     sum += i;
    // }
    // cout << "sum of numbers which are divisible by 3 is: " << sum;
    //---------------------------------------------------------------------------------------------------------
    // int n;
    // cout <<"Enter your number: ";
    // cin >> n;
    // int sum = 0;
    // int i = 1;
    // while( i <= n){
    //     if(i % 3 == 0){
    //         sum += i;
    //     }
    //     i++; // never forget this increment because otherwise the loop willstuck in infinite loopo which will print 1
    // } 
    // cout << "sum of numbers which are divisible by 3 is: " << sum;
    // -------------------------------------------------------------------------------------------------------------------
    // int n;
    // cin >> n;
    // int mul =1 ;// always initialize
    // for (int i = 1; i <= n; i++){
    //     mul *= i;
    // } cout<< mul;
    // ---------------------------------------------------------------------------------------------
    //CODEFORCE ROUND QUESTION
    // int n , k;
    // cin >> n >> k;
    // vector<int> a(n);
    // for(int i = 0 ; i < n; i++){
    //     cin >> a[i];
    // }
    // int t = a[k-1];
    // int count = 0;
    // for(int i = 0; i < n;i++){
    //     if(a[i]>=t && a[i]>0){
    //         count++;
    //     }
    // }
    // cout << count;
    //---------------------------------------------------------------------------------------------
    // DOMINO PILLING
    // int m, n;
    // cin >> m >> n;
    // int rec = m*n;
    // cout << rec/2 ;
    //------------------------------------------------------------------------------------------------
    //THEATER SQUARE
  //  #include<bits/stdc++.h>
// using namespace std;
// int main (){
    // int m, n, a;
    // cin >> m >> n >> a;
    // cout << a;
//}
//------------------------------------------------------------------------------------------------------
//STRING QUESTION OF CC
// int n;
// string name;
// cin >> n>> name;
// cout << name << n;
// -------------------------------------------------------------------------------------------------
//MANHATTAN PROBLEM (to find the distance and place it int he center)
// int n, m, o;
// for(int i = 1; i <= 5; i++){
//     for(int j = 1; j <= 5; j++){
//         cin >> n;;
//         if(n==1){
//             m=i;
//             o=j;
//         }
//     } 
// }
// cout << abs(m-3)+ abs(o-3);
//-------------------------------------------------------------------------------------------------------------
//  //FACTOR FINDING
//     int n;
//     cin >> n;
//     for(int i = 1; i<=n; i++){
//         int t=n%i;
//         if(t==0){
//             cout<< i << " ";
//         }
        
//     }
//----------------------------------------------------------------------------------------------------------------------
//FACTOR TABLE
// int n;
// cin >> n;

// for (int i = 1; i * i <= n; i++) {
//     if (n % i == 0) {
//         cout << i << " x " << n / i << endl;
//     }
// }
//--------------------------------------------------------------------------
// priority_queue<int>pq;
// priority_queue<int, vector<int>, greater <int>> pq; //heap tree like structure // minn heap
// pq.push(5);
// pq.push(3);
// pq.push(7);
// //pq.pop(); // pop the greatest 
// cout << pq.top(); // print the maximun element given 
//O(logN)
//add negative sign to get min heap with max heap code
//-----------------------------------------------------------------------------------
// prime
int n;
cin >> n;
for (int i =2; i <n; i++){
    if (n/i != 0){ 
        cout << "Prime";
    }else{
        cout << "Not prime";
    }
}
    return 0;
    
}
