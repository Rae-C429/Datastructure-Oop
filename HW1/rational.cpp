#include "rational.h"
#include <iostream>
Rational::Rational():a(1),b(1){}
Rational::Rational(const int &numerator, const int &denominator):a(numerator),b(denominator){}
void Rational::add(const Rational &in){
    a = a * in.b + in.a * b;
    b = b * in.b;
}
void Rational::sub(const Rational &in){
    a = a * in.b - in.a * b;
    b = b * in.b;
}
void Rational::mul(const Rational &in){
    a = a * in.a;
    b = b * in.b;

}
void Rational::div(const Rational &in){
    a = a * in.b;
    b = b * in.a;
}
void Rational::print(){
    fra();
    int absa = abs(a);
    int absb = abs(b);
    if(((a <= 0) && (b <= 0)) || ((a >= 0) && (b >= 0))){
        cout << absa << '/' << absb << endl;
    }else{
        cout << "-" << absa << '/' << absb << endl;
    }
    
}
void Rational::fra(){
    int c;
    if (a < b){
        c = a;
    }else{
        c = b;
    }
    for (int i = c; i > 0; i--){
        if((a % i == 0) && (b % i == 0)){
            a = a / i;
            b = b / i;
        }
    }
}
