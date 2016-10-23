#include "set.h"	
#include <iostream>
#include <stdlib.h>

int main(){
    Set a, b, c;
    char operation;
    cout << "Operations: '+' - union, '*' - intersection, '-' - subtraction \n";
    cin >> a;
    cout << "Enter operation: \n";
    cin >> operation;
    cin >> b;
    switch (operation){
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '*':
            c = a*b;
            break;
        default:
            cout << "Incorrect operation! \n";
    }

    cout << c;

    return 0;
}