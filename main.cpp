#include <iostream>
using namespace std;
int main(){
    double first;
    double second;
    char operation;
    cout << "Enter first number:" << endl;
    cin >> first;
    cout << "Pick mathmatics operation (+,-,*,/)" << endl;
    cin >> operation;
    cout << "Enter second number:" << endl;
    cin >> second;
    switch (operation) {
        case '+':
            cout << first + second;
            break;
        case '-':
            cout << first-second;
            break;
        case '*':
            cout << first*second;
            break;
        case '/':
            cout << first/second;
            break;
return 0;

    }
}
