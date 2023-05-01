#pragma once

#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <vector>
using namespace std;

namespace ariel{
    class Fraction{
        private:
            int numerator;
            int denominator;

        public:
            Fraction(int numerator,int denominator);
            Fraction(double num);
            

            //-----------------------------
            // Arithmetic Operators
            //-----------------------------
            Fraction operator-(const Fraction &frac);
            Fraction operator+(const Fraction &frac);
            Fraction operator*(const Fraction &frac);
            Fraction operator/(const Fraction &frac);
            Fraction operator*(double num);
            Fraction operator+(double num);
            Fraction operator-(double num);
            Fraction operator/(double num);


            //-----------------------------
            // Friend Comparison Operators
            //-----------------------------
            friend bool operator!=(const Fraction &frac1, const Fraction &frac2);
            friend bool operator!=(const Fraction &frac1, double num);

            friend bool operator==(const Fraction &frac1, const Fraction &frac2);
            friend bool operator==(const Fraction &frac1, double num);

            friend bool operator<=(const Fraction &frac1, const Fraction &frac2);
            friend bool operator<=(const Fraction &frac1, double num);

            friend bool operator>=(const Fraction &frac1, const Fraction &frac2);
            friend bool operator>=(const Fraction &frac1, double num);

            friend bool operator<(const Fraction &frac1, const Fraction &frac2);
            friend bool operator<(const Fraction &frac1, double num);

            friend bool operator>(const Fraction &frac1, const Fraction &frac2);
            friend bool operator>(const Fraction &frac1, double num);

            //-----------------------------
            // Increment Decrement Operators
            //-----------------------------

            Fraction operator--();
            Fraction operator--(int num);

            Fraction operator++();
            Fraction operator++(int num);

             //-----------------------------
            // Friend Operators (on the othe side)
            //-----------------------------

            
            friend Fraction operator*(double num, const Fraction &frac);
            friend Fraction operator+(double num, const Fraction &frac);
            friend Fraction operator-(double num, const Fraction &frac);
            friend Fraction operator/(double num, const Fraction &frac);
            
            //-----------------------------
            // I/O operations
            //-----------------------------

            friend std::ostream& operator<<(std::ostream& out, const Fraction &frac);
            friend std::istream& operator>>(std::istream& inside, Fraction &frac);

            int getNumerator();
            void setNumerator(int numerator);

            int getDenominator();
            void setDenominator(int denominator);


    };
}