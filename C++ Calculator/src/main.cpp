#include <iostream>
using namespace std;

int main() {
    char op;
    float num1, num2;

    cout << "Enter operator eithe + or - or * or /:";
    cin >> op;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch (op)
    {
        case '+':
            cout << num1+num2;            
            break;
        case '-':
            cout << num1-num2;
            break;
        case '*':
            cout << num1*num2;
            break;
        case '/': 
            cout << num1/num2;
            break;   
        default:
            cout << "Error: Incorrect operator";
            break;
    }    
    return 0;
}