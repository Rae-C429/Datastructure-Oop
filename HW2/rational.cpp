#include "rational.h"
#include<iostream>
Rational::Rational(const int &numerator,const int &denominator):a(numerator),b(denominator){}
Rational::Rational():a(1), b(1){}
// TODO 
// write all functions here
// friend Binary Arithmetic
const Rational operator+(const Rational &in1, const Rational &in2){
    int num, den;
    num = in1.a * in2.b + in2.a * in1.b;
    den = in1.b * in2.b;
    return Rational(num, den);
}
//Binary Arithmetic
const Rational Rational::operator+(const Rational &in){
    int num, den;
    num = a * in.b + in.a * b;
    den = b * in.b ;
    return Rational(num, den);
}
const Rational Rational::operator-(const Rational &in){
    int num, den;
    num = a * in.b - in.a * b;
    den = b * in.b;
    return Rational(num, den);
}
const Rational Rational::operator*(const Rational &in){
    int num, den;
    num = a * in.a;
    den = b * in.b;
    return Rational(num, den);
}
const Rational Rational::operator/(const Rational &in){
    int num, den;
    num = a * in.b;
    den = b * in.a;
    return Rational(num, den);
}
// Assignment
const Rational Rational::operator=(const Rational &in){
    a = in.a;
    b = in.b;
    return Rational(a, b);
}
const Rational Rational::operator+=(const Rational &in){
    a = a * in.b + in.a * b;
    b = b * in.b;
    return Rational(a, b);
}
const Rational Rational::operator-=(const Rational &in){
    a = a * in.b - in.a * b;
    b = b * in.b;
    return Rational(a, b); 
}
const Rational Rational::operator*=(const Rational &in){
    a = a * in.a;
    b = b * in.b;
    return Rational(a, b); 
}
const Rational Rational::operator/=(const Rational &in){
    a = a * in.b;
    b = b * in.a;
    return Rational(a, b); 
}
// Relational
const int Rational::operator>(const Rational &in){
    int num;
    if((a * in.b) > (in.a * b)){
        num = 1;
    }else{
        num = 0;
    }
    return num;
}
const int Rational::operator<(const Rational &in){
    int num;
    if((a * in.b) < (in.a * b)){
        num = 1;
    }else{
        num = 0;
    }
    return num;
}
const int Rational::operator>=(const Rational &in){
    int num;
    if((a * in.b) >= (in.a * b)){
        num = 1;
    }else{
        num = 0;
    }
    return num;
}
const int Rational::operator<=(const Rational &in){
    int num;
    if((a * in.b) <= (in.a * b)){
        num = 1;
    }else{
        num = 0;
    }
    return num;
}
const int Rational::operator==(const Rational &in){
    int num;
    if((a * in.b) == (in.a * b)){
        num = 1;
    }else{
        num = 0;
    }
    return num;
}
const int Rational::operator!=(const Rational &in){
    int num;
    if((a * in.b) != (in.a * b)){
        num = 1;
    }else{
        num = 0;
    }
    return num;
}
// Unary Arithmetic
const Rational Rational::operator++(){
    a = a * 1 + b * 1;
    return Rational(a, b);
}
const Rational Rational::operator++(int){
    int post_a = a, post_b = b;
    a = a * 1 + b * 1;
    return Rational(post_a, post_b);
}
const Rational Rational::operator--(){
    a = a * 1 - b * 1;
    return Rational(a, b);
}
const Rational Rational::operator--(int){
    int post_a = a, post_b = b;
    a = a * 1 - b * 1;
    return Rational(post_a, post_b);
}
const Rational Rational::operator-(){
    a = -a;
    return Rational(a, b);
}
// cout
ostream &operator <<(ostream &output, const Rational &in){
    int absa = abs(in.a);
    int absb = abs(in.b);
        int c;
    if (absa < absb){
        c = absa;
    }else{
        c = absb;
    }
    for (int i = c; i > 0; i--){
        if((absa % i == 0) && (absb % i == 0)){
            absa = absa / i;
            absb = absb / i;
        }
    }
    if(((in.a <= 0) && (in.b <= 0)) || ((in.a >= 0) && (in.b >= 0))){
        output << absa << "/" << absb;
    }else{
        output << "-" << absa << "/" << absb;
    }
    return output;
}