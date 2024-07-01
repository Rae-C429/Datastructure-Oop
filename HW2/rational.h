#include <iostream>
#include <algorithm>
using namespace std;
class Rational{
private:
    int a; // numerator
    int b; // denominator

public:
    Rational();
	Rational(const int &numerator,const int &denominator);
    // TODO 
	// write all declarations here
    // Binary Arithmetic
    const Rational operator+(const Rational &in);
    friend const Rational operator+(const Rational &in1, const Rational &in2);
    const Rational operator-(const Rational &in);
    const Rational operator*(const Rational &in);
    const Rational operator/(const Rational &in);
    // Assignment
    const Rational operator=(const Rational &in);
    const Rational operator+=(const Rational &in);
    const Rational operator-=(const Rational &in);
    const Rational operator*=(const Rational &in);
    const Rational operator/=(const Rational &in);
    // Relational
    const int operator>(const Rational &in);
    const int operator<(const Rational &in);
    const int operator>=(const Rational &in);
    const int operator<=(const Rational &in);
    const int operator==(const Rational &in);
    const int operator!=(const Rational &in);
    // Unary Arithmetic
    const Rational operator++(); //Prefix version
    const Rational operator++(int); //Postfix version
    const Rational operator--(); //Prefix version
    const Rational operator--(int); //Postfix version
    const Rational operator-();
    // cout
    friend ostream &operator <<(ostream & output,const Rational &in);
};
