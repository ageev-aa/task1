#include <iostream>
//#include "stdafx.h"
#include <stdlib.h>
#include <string.h>
#include "Set.h"

using namespace std;





Set::Set (const Set& other){
    power = other.power;
    memcpy (set, other.set, sizeof(char)*power);
}

Set& Set::operator += (const char c){
    if (power+1 > max_pow || In(c)) 
    	return *this;
    set[power] = c;
    power++;
}

bool Set::In (char c) const {
    for (int i = 0; i<power; i++) 
        if (set[i] == c) return true;
    return false;
}

Set& Set::operator = (const Set& other){ 
    power = other.power;
    memcpy (set, other.set, sizeof(char)*power);
    return *this;
}


Set operator + (const Set& set1 , const Set& set2){

    Set tmp;
    for (int i = 0; i<set1.power; i++)
        tmp+=set1.set[i];
    for (int i = 0; i<set2.power; i++)
        tmp+=set2.set[i];
    return tmp;
}

Set operator * (const Set& set1 , const Set& set2){
	Set tmp;
    for (int i = 0; i<set1.power; i++) 
        if (set2.In(set1.set[i])) tmp+=set1.set[i];
    return tmp;

}

Set operator - (const Set& set1 , const Set& set2){
	Set tmp;
    for (int i = 0; i<set1.power; i++) 
        if (!set2.In(set1.set[i])) tmp+=set1.set[i]; 
    return tmp; 

}

istream & operator >> (istream& in, Set& s){
    cout << "Enter power: ";
    in >> s.power;
    cout << "Enter chars: ";
    for (int i=0; i<s.power; i++)
        in >> s.set[i];
    return in;
}
 
ostream & operator << (ostream& out, const Set& s){
    out << "{ ";
    for (int i = 0; i<s.power-1; i++)
        out << s.set[i] << ", ";
    out << s.set[s.power-1] << " }";
    return out;
}
