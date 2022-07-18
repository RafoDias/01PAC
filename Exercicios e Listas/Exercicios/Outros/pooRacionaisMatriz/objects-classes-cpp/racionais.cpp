#include <iostream>
#include <string>

using namespace std;

class Rational
{
    public:
    int numerator;
    int denominator;
    

    Rational(int n, int d) {
        numerator = n;
        denominator = d;
    }

    public: // Declaração de funções a serem criadas fora da classe
    string toString();
    Rational plus(Rational b);
    Rational minus(Rational b);
    Rational times(Rational b);
    Rational divides(Rational b);
    bool equals(Rational b);
    Rational simplified();
};

int mdc(int a, int b)
{
    int resto = a % b;
    while (resto != 0)
    {
        a = b;
        b = resto;
        resto = a % b;
    }
    return b;
}

int mmc(int a, int b)
{
    return (a*b)/(mdc(a,b));
}

Rational Rational::simplified()
{
    int aux = mdc(numerator, denominator);
    int num = numerator / aux;
    int den = denominator / aux;
    return Rational(num, den);
}

string Rational::toString()
{
    string sinal = "";
    if ((numerator * denominator) < 0)
        sinal = "-";
    
    return sinal + to_string(abs(numerator)) + "/" + to_string(abs(denominator));
}

    // OVERRIDE DO OSTREAM E DO OPERADOR << (USADOS NO COMANDO COUT). https://stackoverflow.com/questions/5171739/tostring-override-in-c
inline std::ostream & operator<<(std::ostream & Str, Rational v) { 
    Str << v.toString(); // print something from v to str, e.g: Str << v.getX();
    return Str;
}

Rational Rational::plus(Rational b)
{
    int den = denominator * b.denominator;
    int num = (numerator * b.denominator) + (b.numerator * denominator);

    return Rational(num, den);
}

Rational Rational::minus(Rational b)
{
    int den = denominator * b.denominator;
    int num = (numerator * b.denominator) - (b.numerator * denominator);

    return Rational(num, den);
}

Rational Rational::times(Rational b)
{
    int den = denominator * b.denominator;
    int num = numerator * b.numerator;

    return Rational(num, den);
}

Rational Rational::divides(Rational b)
{
    int den = denominator * b.numerator;
    int num = numerator * b.denominator;

    return Rational(num, den);
}

bool Rational::equals(Rational b)
{
    if (simplified().numerator == b.simplified().numerator)
        if (simplified().denominator == b.simplified().denominator)
            return true;
    
    return false;
}