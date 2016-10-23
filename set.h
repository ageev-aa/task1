#include <iostream>

using namespace std;

class Set{
    static const int max_pow = 50;
    char set [max_pow];
    int power; 
    

 
    public:
        Set(const Set& other);
        Set () : power(0) {};
        Set& operator =	(const Set& other); 
        ~Set() {};
        bool In (char c) const;
        Set& operator += (const char c);


        friend Set operator + (const Set& set1 , const Set& set2);
        friend Set operator * (const Set& set1 , const Set& set2);
        friend Set operator - (const Set& set1 , const Set& set2);
        friend ostream & operator << (ostream& out, const Set& s);
        friend istream & operator >> (istream& in, Set& s);


};