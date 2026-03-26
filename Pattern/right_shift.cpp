#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num=1;
    for(int i = 0; i<n; i++){ 
       /* i is starting from 0 for row 1 its i value is 0 
        i < n, will eun till i supoose 5 so it will run till 4 as 0 to 5 already 5 rows*/

        for(int j = 0; j<i; j++){
           // j<i, to calculate the space for i=0 j=0
            cout << " ";
        }
        for(int j = 0; j < n-i; j++){
           // j<n-i for 1st row print suppose 5 number of 1 then next ith row that is 1 will print n-i means 4 of 2s number 
            cout << (i+1);
            //and this completes the puzzlw by telling how it increasing i =0 print 1 i=1 print 2
        } 
        cout << endl;
    }
    return 0;
}