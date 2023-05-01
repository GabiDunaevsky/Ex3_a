#include "doctest.h"
#include <stdexcept>
#include "sources/Fraction.hpp"
#include <iostream>
#include <algorithm> 
#include <typeinfo>
#include <sstream>
using namespace ariel;
using namespace std;

TEST_CASE("Valid fractions") {
    Fraction frac(7, 15);
    //checking the type of the fractions numerator and denominator
    CHECK(typeid(frac.getNumerator()).name() == typeid(int).name());
    CHECK(typeid(frac.getDenominator()).name() == typeid(int).name());
    //check throws if denominator eq to 0.
    CHECK_THROWS(Fraction(1,0));
}

TEST_CASE("Arithmetic Operations") {
    Fraction frac1(1, 2);
    Fraction frac2(1, 4);
    double num = 0.5;
    SUBCASE("Add operation"){
        Fraction afterAdd = frac1 + frac2;
        Fraction afterAddDR = frac2 + num;
        Fraction afterAddDL = num + frac2;
        //check addition of two fractions
        CHECK(((afterAdd.getNumerator() == 3) && (afterAdd.getDenominator() == 4)));
        // check addition of double from right
        CHECK(((afterAddDR.getNumerator() == 3) && (afterAddDR.getDenominator() == 4)));
        //check addition of double from left
        CHECK(((afterAddDL.getNumerator() == 3) && (afterAddDL.getDenominator() == 4)));

    }
    SUBCASE("Sub operation"){
        Fraction afterAdd = frac1 - frac2;
        Fraction afterAddDR = frac2 -  num;
        Fraction afterAddDL = num - frac2;
        //check sub of two fractions
        CHECK(((afterAdd.getNumerator() == 1) && (afterAdd.getDenominator() == 4)));
        // check sub of double from right
        CHECK(((afterAddDR.getNumerator() == -1) && (afterAddDR.getDenominator() == 4)));
        //check sub of double from left
        CHECK(((afterAddDL.getNumerator() == 1) && (afterAddDL.getDenominator() == 4)));

    }
    SUBCASE("Mul operation"){
        Fraction afterAdd = frac1 * frac2;
        Fraction afterAddDR = frac2 * num;
        Fraction afterAddDL = num * frac2;
        //check mul of two fractions
        CHECK(((afterAdd.getNumerator() == 1) && (afterAdd.getDenominator() == 8)));
        // check mul of double from right
        CHECK(((afterAddDR.getNumerator() == 1) && (afterAddDR.getDenominator() == 8)));
        //check mul of double from left
        CHECK(((afterAddDL.getNumerator() == 1) && (afterAddDL.getDenominator() == 8)));

    }
    SUBCASE("Div operation"){
        Fraction afterAdd = frac1 / frac2;
        Fraction afterAddDR = frac2 / num;
        Fraction afterAddDL = num / frac2;
        //check div of two fractions
        CHECK(((afterAdd.getNumerator() == 2) && (afterAdd.getDenominator() == 1)));
        // check div of double from right
        CHECK(((afterAddDR.getNumerator() == 1) && (afterAddDR.getDenominator() == 2)));
        //check div of double from left
        CHECK(((afterAddDL.getNumerator() == 2) && (afterAddDL.getDenominator() == 1)));

    }
}

TEST_CASE("Comparison operations"){
    Fraction frac1(1, 2);
    Fraction frac2(1, 4);
    double num = 0.5;
    SUBCASE("< operation"){
        //check between 2 fractions
        CHECK(frac2 < frac1);
        //check between 2 fractions
         CHECK(0.25 < frac1);
        //check between 2 fractions
        CHECK(frac1 < 0.75);
    }
    SUBCASE("> operation"){
        //check between 2 fractions
        CHECK(frac1 > frac2);
        //check between 2 fractions
         CHECK(0.75 > frac2);
        //check between 2 fractions
        CHECK(frac1 > 0.25);
    }
    SUBCASE(">= operation"){
        //check between 2 fractions
        CHECK(frac1 >= frac2);
        CHECK(frac1 >= frac1);
        //check between 2 fractions
         CHECK(0.75 >= frac2);
         CHECK(0.25 >= frac2);
        //check between 2 fractions
        CHECK(frac1 >= 0.25);
        CHECK(frac1 >= 0.5);
    }
    SUBCASE("<= operation"){
        //check between 2 fractions
        CHECK(frac2 <= frac1);
        CHECK(frac1 <= frac1);
        //check between 2 fractions
         CHECK(frac2 <= 0.75);
         CHECK(0.25 <= frac2);
        //check between 2 fractions
        CHECK(0.25 <= frac1);
        CHECK(frac1 <= 0.5);
    }
    SUBCASE("== operation"){
        //check between 2 fractions
        CHECK(frac2 == frac2);
        CHECK(frac1 == 0.5);
        CHECK_FALSE(frac2 == frac1);
    }
    SUBCASE("!= operation"){
        //check between 2 fractions
        CHECK(frac1 != frac2);
        CHECK(frac2 != 0.5);
        CHECK_FALSE(frac2 != frac2);
    }

}

TEST_CASE("Increment Decrement Operations") {
    Fraction frac1(1, 2);
    Fraction frac2(1, 4);
    double num = 0.5;
    SUBCASE("++ operation"){
        //check between 2 fractions
        frac1++;
        CHECK(((frac1.getNumerator() == 3) && (frac1.getDenominator() == 2)));
        ++frac2;
        CHECK(((frac2.getNumerator() == 5) && (frac2.getDenominator() == 4)));
        frac1--;
        CHECK(((frac1.getNumerator() == 1) && (frac1.getDenominator() == 2)));
        --frac2;
        CHECK(((frac2.getNumerator() == 1) && (frac2.getDenominator() == 4)));
    }

}


TEST_CASE("check getters and setters") {
    Fraction frac(8, 15);
    // check the getters
    CHECK(((frac.getNumerator() == 8) && (frac.getDenominator() == 15)));
    frac.setNumerator(9);
    // check after setting the numerator(and denominator still the same)
    CHECK(((frac.getNumerator() == 9) && (frac.getDenominator() == 15)));
    frac.setDenominator(8);
    //checking after setting the denominator
    CHECK(((frac.getNumerator() == 9) && (frac.getDenominator() == 8)));
    CHECK_THROWS(frac.setDenominator(0));
}


