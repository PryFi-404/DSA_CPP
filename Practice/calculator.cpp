// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//    int a;
//    cout << "Enter no. a: ";
//    cin >> a;
   
//    string op;
//    cout <<"use ur operator from ( add, sub, mul, div, mod, *, +, -, %, /) : ";
//    cin >> op;
   
//    int b;
//    cout << "Enter no. b: ";
//    cin >> b;
   
//     // op to lowecase
//    for(int i = 0; i < op.length(); i++){
//     op[i]=tolower(op[i]);
//    }
//    char sign;

//    // similar
//    if ( op == "+" || op == "add")
//    sign = '+'; 
   
//    else if ( op == "-" || op == "sub")
//    sign = '-'; 
   
//    else if ( op == "*" || op == "mul")
//    sign = '*'; 
   
//    else if ( op == "%" || op == "mod")
//    sign = '%'; 
   
//    else if ( op == "/" || op == "div")
//    sign = '/'; 
//    else{
//     cout << " you went outside the operations.";
//    }
   
//    switch (sign)
//    {
//    case '+':
//     cout << "Result: " << a+b << endl;
//     break;

//    case '-':
//     cout << "Result: " << a-b << endl;
//     break;

//    case '*':
//     cout << "Result: " << a*b << endl;
//     break;

//    case '/':
//    if (b != 0)
//     cout << "Result: " << a/b;
//     else
//     cout <<"error: divison by zero";
//     break;

//    case '%':
//    if (b != 0)
//     cout << "Result: " << a%b;
//     else
//     cout <<"error: divison by zero";
//     break;
   
//    default:
//    cout << "INVALID" << endl;
    
//    }

//     return 0;
// }
