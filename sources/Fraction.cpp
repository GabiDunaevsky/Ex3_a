#include "exception"
#include "vector"
#include <exception>
#include <stdexcept>
#include <iostream>
#include "Fraction.hpp"
using namespace std;

namespace ariel {
    Fraction::Fraction(int numerator,int denominator){
        if(denominator == 0){
            throw std::invalid_argument("denominator can't be 0");
        }
        this->numerator = numerator;
        this->denominator = denominator;
    }
    Fraction::Fraction(double num){
    }
    int Fraction::getNumerator(){
        return this->numerator;
    }
    void Fraction::setNumerator(int numerator){
        this->numerator = numerator;
    }

    int Fraction::getDenominator(){
        return this->denominator;
    }
    void Fraction::setDenominator(int denominator){
        if(denominator == 0){
            throw std::invalid_argument("denominator can't be 0");
        }
        this->denominator = denominator;
    }

    //-----------------------------
    // Arithmetic Operators
    //-----------------------------
    Fraction Fraction::operator-(const Fraction &frac){
        return *this;
    }
    Fraction Fraction::operator+(const Fraction &frac){
        return *this;
    }
    Fraction Fraction::operator*(const Fraction &frac){
        return *this;
    }
    Fraction Fraction::operator/(const Fraction &frac){
        return *this;
    }
    Fraction Fraction::operator*(double num){
        return *this;
    }
    Fraction Fraction::operator+(double num){
        return *this;
    }
    Fraction Fraction::operator-(double num){
        return *this;
    }
    Fraction Fraction::operator/(double num){
        return *this;
    }

    //-----------------------------
    // Friend Comparison Operators
    //-----------------------------
    bool operator!=(const Fraction &frac1, const Fraction &frac2){
        double retio = frac1.denominator/ frac2.denominator;
        if(frac1.denominator != (frac2.denominator*retio) || frac1.numerator != (frac2.numerator*retio)){
            return false;
        }
        return true;
    }
    bool operator!=(const Fraction &frac1, double num){
        return true;
    }

    bool operator==(const Fraction &frac1, const Fraction &frac2){
        return true;
    }
    bool operator==(const Fraction &frac1, double num){
        return true;
    }

    bool operator<=(const Fraction &frac1, const Fraction &frac2){
        return true;
    }
    bool operator<=(const Fraction &frac1, double num){
        return true;
    }

    bool operator>=(const Fraction &frac1, const Fraction &frac2){
        return true;
    }
    bool operator>=(const Fraction &frac1, double num){
        return true;
    }

    bool operator<(const Fraction &frac1, const Fraction &frac2){
        return true;
    }
    bool operator<(const Fraction &frac1, double num){
        return true;
    }

    bool operator>(const Fraction &frac1, const Fraction &frac2){
        return true;
    }
    bool operator>(const Fraction &frac1, double num){
        return true;
    }

    //-----------------------------
    // Increment Decrement Operators
    //-----------------------------

    Fraction Fraction::operator--(){
        return *this;
    }
    Fraction Fraction::operator--(int num){
        return *this;    
    }

    Fraction Fraction::operator++(){
        return *this;
    }
    Fraction Fraction::operator++(int num){
        return *this;
    }

    //-----------------------------
    // Friend Operators (on the othe side)
    //-----------------------------

    
    Fraction operator*(double num, const Fraction &frac){
        return frac;
    }
    Fraction operator+(double num, const Fraction &frac){
        return frac;
    }
    Fraction operator-(double num, const Fraction &frac){
        return frac;
    }
    Fraction operator/(double num, const Fraction &frac){
        return frac;
    }

    //-----------------------------
    // I/O operations
    //-----------------------------

    std::ostream& operator<<(std::ostream& out, const Fraction &frac){
        return out;
    }
    std::istream& operator>>(std::istream& inside, Fraction &frac){
        return inside;
    }
}