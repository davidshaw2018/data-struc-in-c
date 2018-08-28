#include <stdio.h>

typedef struct {
    int num;
    int den;
} Fraction;

Fraction addFraction(Fraction a, Fraction b) {
    Fraction sum;
    sum.num = a.num *b.den + b.num *a.den;
    sum.den = a.den * b.den;
    return sum;
}

Fraction subFraction(Fraction a, Fraction b) {
    Fraction sub;
    sub.num = a.num *b.den - b.num *a.den;
    sub.den = a.den * b.den;
    return sub;
}

Fraction multFraction(Fraction a, Fraction b) {
    Fraction product;
    product.num = a.num * b.num;
    product.den = a.den * b.den;
    return product;
}

Fraction divFraction(Fraction a, Fraction b) {
    Fraction quot;
    quot.num = a.num * b.den;
    quot.den = a.den * b.num;
    return quot;
}

Fraction reduced(Fraction a) {
    Fraction reduced;
    int gcf;
    for (int i = 1; i<=a.num; ++i) {
       if (a.num%i == 0) {
           if (a.den % i == 0) {
               gcf = i;
           }
       }
    }
    reduced.num = a.num/gcf;
    reduced.den = a.den/gcf;
    return reduced;
}

int main() {
    Fraction a;
    a.num = 64;
    a.den = 96;
    Fraction b = reduced(a);
    printf("%d / %d",b.num,b.den);
    return 0;
    
}