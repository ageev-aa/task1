#include "set.h"	
#include <iostream>
#include <stdlib.h>

int main(){
	Set a, b, c;
    cout << "Operations: '+'' - union, '*'' - intersection, '-'' - subtraction";
    cin >> a;
    cin >> b;
    c = a + b;
    cout << c;

    return 0;
}