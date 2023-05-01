#include "sources/Fraction.hpp"
#include "doctest.h"
#include <stdexcept>

namespace ariel
{
    TEST_CASE("Creating new Fraction")
    {
        CHECK_THROWS(Fraction (2, 2));
    }

    TEST_CASE("test to check that the Denominator isn't 0")
    {
        CHECK_THROWS(Fraction(7, 0));
    }

    TEST_CASE("test for the operator +")
    {
        Fraction frac1(1, 2);
        Fraction frac2(7, 4);
        Fraction frac3(9, 4);
        CHECK( frac3 == frac1 + frac2);
        
    }
    TEST_CASE("test for the operator -")
    {
        Fraction frac1(1, 2);
        Fraction frac2(7, 4);
        Fraction frac3(-5, 4);
        CHECK( frac3 == frac1 - frac2);
    }
    TEST_CASE("test for the operator *")
    {
        Fraction frac1(1, 2);
        Fraction frac2(7, 4);
        Fraction frac3(7, 8);
        CHECK( frac3 == frac1 * frac2);  
    }
    TEST_CASE("test for the operator /")
    {
        Fraction frac1(1, 2);
        Fraction frac2(7, 4);
        Fraction frac3(4, 14);
        CHECK( frac3 == frac1 / frac2); 
    }
    TEST_CASE("test for the operator + with double")
    {
        Fraction frac1(22,7);
        double d=2.11;
        Fraction frac3(2481,100);
        CHECK( frac3 == frac1 + d);
        
    }
    TEST_CASE("test for the operator - with double")
    {
        Fraction frac1(1, 2);
        double d=2.11;
        Fraction frac3(-161,100);
        CHECK( frac3 == frac1 - d);
    }
    TEST_CASE("test for the operator * with double")
    {
        Fraction frac1(1, 2);
        double d=2.11;
        Fraction frac3(211,200);
        CHECK( frac3 == d*frac1);
    }
    TEST_CASE("test for the operator / with double")
    {
        Fraction frac1(1, 2);
        double d=2.11;
        Fraction frac3(50,211);
        CHECK( frac3 == d/frac1);
    }
    TEST_CASE("test for the operator ++")
    {
        Fraction frac1(1, 2);
        Fraction frac11(1,2);
        Fraction frac2=frac1++;
        Fraction frac3(3,2);
        CHECK( frac1==frac3);
        CHECK( frac2==frac11);
    }
    TEST_CASE("test for the operator --")
    {
        Fraction frac1(1, 2);
        Fraction frac11(1,2);
        Fraction frac2=frac1--;
        Fraction frac3(-1,2);
        CHECK( frac1==frac3);
        CHECK( frac2==frac11);
    }
    TEST_CASE("test for the operator ++")
    {
        Fraction frac1(1, 2);
        Fraction frac2=++frac1;
        Fraction frac3(3,2);
        CHECK( frac2==frac3);
        
    }
    TEST_CASE("test for the operator --")
    {
        Fraction frac1(1, 2);
        Fraction frac2=--frac1;
        Fraction frac3(-1,2);
        CHECK( frac2==frac3);
    }
    TEST_CASE("test for the operator <")
    {
        Fraction frac1(1, 2);
        Fraction frac2(3, 4);
        CHECK( frac1 < frac2); 
    }
    TEST_CASE("test for the operator < with double")
    {
        Fraction frac1(1, 2);
        double d=2.11;
        CHECK(frac1<d);
    }
    TEST_CASE("test for the operator >")
    {
        Fraction frac1(3, 4);
        Fraction frac2(1, 2);
        CHECK( frac1 > frac2); 
    }
    TEST_CASE("test for the operator > with double")
    {
        Fraction frac1(1, 2);
        double d=0.11;
        CHECK(frac1>d);
    }
    TEST_CASE("test for the operator <=")
    {
        Fraction frac1(1, 2);
        Fraction frac2(1, 2);
        CHECK( frac1 <= frac2); 
    }
    TEST_CASE("test for the operator >=")
    {
        Fraction frac1(1, 2);
        Fraction frac2(1, 2);
        CHECK( frac1 >= frac2); 
    }
    TEST_CASE("test for the operator ==")
    {
        Fraction frac1(1, 2);
        Fraction frac2(1, 2);
        CHECK( frac1 == frac2); 
    }
    TEST_CASE("test for the operator !=")
    {
        Fraction frac1(0, 2);
        Fraction frac2(1, 2);
        CHECK( frac1 != frac2); 
    }


 








}