#include <bits/stdc++.h>
using namespace std;

int main() {
    // PYRAMID
    // int n;
    // cout << "Please enter the time u want the output: ";
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1 ; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    //---------------------------------------------------------------------------------------------------
    //REVERSE PYRAMID
    // int n;
    // cout << "Please enter the time u want the output: ";
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n-i; j++){
    //         cout << "*" << " ";
    //     }
    //     cout << endl;
    // }
    //--------------------------------------------------------------------------------------
    //CHAR PYRAMID
    // int n;
    // cout << "Please enter the time u want the output: ";
    // cin >> n;
    
    // for (int i = 0; i < n; i++){
    //     char ch = i + 65; // if u will print i + 1 it will give emojis 
    //                         // and u can do either i + 65 or 'A' + 1
    //     for (int j = 0; j < i + 1; j++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
    //-----------------------------------------------------------------------------------
    //NUM PYRAMID   
    // int n;
    // cout << "Please enter the time u want the output: ";
    // cin >> n;
    // for (int i = 0; i < n; i++){
    //     int num = i + 1;
    //     for (int j = 0; j < i + 1; j++){
    //         cout << num << " | ";
    //     }
    //     cout << endl;
    // }
    //----------------------------------------------------------------------------------------------
    // NUM PURAMID 1 CONSTANT
    // int n;
    // cout << "Please enter the time u want the output: ";
    // cin >> n;
    // for (int i = 0; i < n; i++){
    //     int num = 1;
    //     for (int j = 0; j < i + 1; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    //---------------------------------------------------------------------
    //REVERSE CHAR 
    // int n;
    // cout << "Please enter the time u want the output: ";
    // cin >> n;
    // for(int i = 0 ; i < n; i++){
    //     char ch = 'A' + (n-i -1);
    //     for (int j = 0; j < i + 1; j++){
    //         cout << ch << " | ";

    //     } cout << endl;
    // }
    // -----------------------------------------------------------------------------------------------------------------------
    // REVRSE PATTERN
    // int n ;
    // cin >> n;
    // for(int i = 0; i < n; i++){
    //     for(int j = i+1 ; j >= 0; j--){
    //         cout<<j << " ";
    //     }
    //     cout << endl;
    // }
    //--------------------------------------------------------------------------------
    //FLOYD TRIANGLE ( printing continuous 1 to n)
    // int n;
    // cin>>n;
    // int num = 1;
    // for(int i = 0; i < n; i++){
        
    //     for(int j = 0; j < i + 1; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    //---------------------------------------------------------------------------------------------------------
    // BACTERIA PROBLEM ON CODE FORCES
    // int n;
    // cin >> n;
    // int count = 0;
    // while (n > 0) {
    //     count += (n & 1);
    //     n >>= 1;
    // }
    // cout << count;
    //-----------------------------------------------------------------------------------------------------------
    //RIGHT SHIFTED INVERTED TRIANGLE PATTERN
    // int n;
    // cin >> n;
    // int num=1;
    // for(int i = 0; i<n; i++){ 
    //    /* i is starting from 0 for row 1 its i value is 0 
    //     i < n, will eun till i supoose 5 so it will run till 4 as 0 to 5 already 5 rows*/

    //     for(int j = 0; j<i; j++){
    //        // j<i, to calculate the space for i=0 j=0
    //         cout << " ";
    //     }
    //     for(int j = 0; j < n-i; j++){
    //        // j<n-i for 1st row print suppose 5 number of 1 then next ith row that is 1 will print n-i means 4 of 2s number 
    //         cout << (i+1);
    //         //and this completes the puzzlw by telling how it increasing i =0 print 1 i=1 print 2
    //     } 
    //     cout << endl;
    // }
    //---------------------------------------------------------------------------------------------------------------------------------
    //PYRAMID PATTERN
// int n;
// cin >> n;

// for(int i = 1; i <= n; i++){

//     // 1️⃣ Print spaces
//     for(int s = 1; s <= n - i; s++){
//         cout << " ";
//     }

//     // 2️⃣ Print increasing numbers
//     for(int j = 1; j <= i; j++){
//         cout << j;
//     }

//     // 3️⃣ Print decreasing numbers
//     for(int j = i - 1; j >= 1; j--){
//         cout << j;
//     }

//     cout << endl;
// }
//----------------------------------------------------------------------------------------------------------
//CONTINUOUS CHAR PRINT
// int n;
// cin >> n;
// char ch = 'A';
// for(int i = 0; i < n; i++){
//     for(int j =0; j <i+1;j++){
//         cout << ch++ ;
//     }
//     cout << endl;
// }

//--------------------------------------------------------------------------------------------------
    // PYRAMID PATTERN 
    // int n ;
    // cout << "Please enter ur input: ";
    // cin >>n;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= n - i - 1; j++){
    //         cout << " ";
    //     }
    //     for(int k = 1; k <= i; k++){
    //         cout << k;
    //     }
    //     for(int m = i-1; m >= 1; m--){
    //         cout << m;
    //     }
    //     cout << endl;
    // }
    //------------------------------------------------------------------------------------------------------------
    //BUTTERFLY PATTERN 
   // int n = 5;

    // // Upper part
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) cout << "*";
    //     for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    //     for (int j = 1; j <= i; j++) cout << "*";
    //     cout << endl;
    // }

    // // Lower part
    // for (int i = n; i >= 1; i--) {
    //     for (int j = 1; j <= i; j++) cout << "*";
    //     for (int j = 1; j <= 2 * (n - i); j++) cout << " ";
    //     for (int j = 1; j <= i; j++) cout << "*";
    //     cout << endl;
    // }
    //---------------------------------------------------------------------------------------------------------------
    //CHAR PRINTING A BB CCC
//     int n;
// cin >> n;

// for(int i = 0; i < n; i++){
//     char ch = 'A' + i;
//     for(int j =0; j <i+1;j++){
//         cout << ch;
//     }
//     cout << endl;
// }
    //---------------------------------------------------------------------------------------------------------------------------------------\
    //CHAR PRINT A CONSTANT ThEN PRINT
// int n;
// cin >> n;

// for(int i = 0; i < n; i++){
//     char ch = 'A' ;
//     for(int j =0; j <i+1; j++){
//         cout << ch++;
//     }
//     cout << endl;
// }
//--------------------------------------------------------------------------------------------------------------------
// NUM PRINT CONTI
// int n;
// cin >> n;
// int num = 1;
// for (int i = 0; i < n; i++){
//     for(int j = 0; j < i+1; j++){
//         cout << num++;
//     }
//     cout << endl;
// }
//------------------------------------------------------------------------------------------------------
//NUM PRINT 1 22 333
// int n;
// cin >> n;
// int num = 1;
// for (int i = 0; i < n; i++){
//     for(int j = 0; j < i+1; j++){
//         cout << num+i;
//     }
//     cout << endl;
//------------------------------------------------------------------------------------------------------
//NUM PRINT 1111 222 33 4 5 REVERSE
// int n;
// cin >> n;
// int num = 1;
// for (int i = 0; i < n; i++){
//     for(int j = 0; j < n-i; j++){
//         cout << num+i;
//     }
//     cout << endl;
// }
//------------------------------------------------------------------------------------------------------------------
//NUM 55555 4444 333 22 1
// int n;
// cin >> n;
// //int num = 1;
// for (int i = 0; i < n; i++){
//     for(int j = 0; j < n-i; j++){
//         cout << n-i;
//     }
//     cout << endl;
// }
//----------------------------------------------------------------------------------------------------------------------------
//RIGHT SHIFTED INVERSE PYRAMID
// int n;
// cin >>n;
// int num =1;
// for(int i = 0 ;i<n;i++){
//     for(int j=0;j<i;j++){
//         cout << " ";
//     }
//     for(int j=0; j<n-i; j++){
//         cout << num + i;
//     }
//     cout << endl;
//}
//------------------------------------------------------------------------------------------------------------------------------
//PYRAMID PATTERN
    // int n;
    // cin >> n;
   
    // for(int i = 0; i<n; i++){

    //     for(int j = 0; j < n-i-1; j++){
    //         cout << " ";
    //     }

    //     for(int j = 0; j <= i; j++){
    //         cout << j+1;
    //     }

    //     for(int j = i - 1; j >= 0; j--){
    //         cout << j + 1;
    //     }
        
    //     cout << endl;
    // }
    //------------------------------------------------------------------------------------------------------------------------
    //BUTTERFLY PATTERN
    // int n;
    // cin >> n;

    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < i+1; j++){
    //         cout << "*";
    //     }
    //     for (int j = 0; j < 2*(n-i-1); j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    // for(int i = n-2; i >= 0; i--){
    //     for(int j = 0; j < i+1; j++){
    //         cout << "*";
    //     }
    //     for (int j = 0; j < 2*(n-i-1); j++){
    //         cout << " ";
    //     }
    //     for(int j = 0; j < i+1; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }
    //---------------------------------------------------------------------------------------------------------------------------
    return 0;
}