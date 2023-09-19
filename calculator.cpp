#include <bits/stdc++.h>
using namespace std;

int main() {
    double n1, n2;
    char op;

    
    cout << "Enter the first number: ";
    cin >> n1;

    
    cout << "Enter the second number: ";
    cin >> n2;

      
    cout << "Choose an operation (+, -, *, /): ";
    cin >> op;

    
    double ans;
    switch (op) {
        case '+':
            ans = n1 + n2;
            break;
        case '-':
            ans = n1 - n2;
            break;
        case '*':
            ans = n1 * n2;
            break;
        case '/':
            if (n2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;
                
            } else {
                ans = n1 / n2;
            }
            break;
        default:
            cout << "Invalid operation. Please choose +, -, *, or /." << endl;
            
    }

    
    cout << "Answer: " << n1 << " " << op << " " << n2 << " = " << ans << endl;

    return 0;
}
