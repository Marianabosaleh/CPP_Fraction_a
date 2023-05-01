#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>
using namespace std;

namespace ariel{
    class Fraction{
        int x;
        int y;
        
    public:
        //constructors
        Fraction();
        Fraction(int x,int y);   
		//destructor
        ~Fraction(void);

        // Getter and Setter
		int getx() const;
        int gety() const;
		void setx(int x);
        void sety(int y);
	

		// Fraction functions
		void reduce();
		void Double_To_Fraction(double num);
		double Fraction_To_Double(int x, int y);
		

		// Operator overloading functions
		friend Fraction operator+(const Fraction& fraction1,const Fraction& fraction2);
		Fraction operator+(double num) const;
		friend Fraction operator-(const Fraction& fraction1,const Fraction& fraction2);
		Fraction operator-(double num) const;
		friend Fraction operator*(const Fraction& fraction1,const Fraction& fraction2);
		friend Fraction operator*(const double doub,const Fraction& fraction1);
		friend Fraction operator/(const Fraction& fraction1,const Fraction& fraction2);
		friend Fraction operator/(const double doub,const Fraction& fraction1);
		
		Fraction& operator++();
		const Fraction operator++(int);
		Fraction& operator--();
		const Fraction operator--(int);

		bool operator<(const Fraction& fraction) ;
		bool operator<(const double& doub);
		bool operator<=(const Fraction& fraction);
		bool operator>(const Fraction& fraction) ;
		bool operator>(const double& doub);
		bool operator>=(const Fraction& fraction);
		bool operator==(const Fraction& fraction);
		bool operator!=(const Fraction& fraction);

		friend std::ostream& operator<<(std::ostream& out, const Fraction& fraction);
		friend std::istream& operator>>(std::istream& in, const Fraction& fraction);

    };

}