#include "Fraction.hpp"
using namespace std;
namespace ariel{

    //constructors
    Fraction::Fraction(){
        this->x=0;
        this->y=1;
    }
    Fraction::Fraction(int x, int y):x(x),y(y) {
        if ( y== 0 ){
            throw "you can't divide by 0 ";
        }
    }
    //destructor
    Fraction::~Fraction() {}

    // Getter and Setter
    int Fraction::getx() const{
	    return this->x;
    }

    int Fraction::gety() const{
        return this->y;
    }


    void Fraction::setx(int x) {
        this->x = x;
    }

    void Fraction::sety(int y) {
        this->y = y;
    }
    
    void Fraction::reduce() {
   
    }   


	void Fraction:: Double_To_Fraction(double num){


    }
	double Fraction::Fraction_To_Double(int x, int y){
        return 0;
    }
    
    std::ostream& operator<<(std::ostream& out, const Fraction& fraction) {
        out << fraction.getx() << '/' << fraction.gety();
        return out;
    }
    std::istream& operator>>(std::istream& in, const Fraction& fraction) {
        //in >> fraction.getx() >> '/' >>  fraction.gety();
        return in;
    }


    Fraction operator+(const Fraction& fraction1,const Fraction& fraction2){
        Fraction res(1,1);
        return res ;
    }
    Fraction Fraction:: operator+(double num) const{
        //Fraction res(1,1);
        return Fraction(0,1) ;
    }
    Fraction operator-(const Fraction& fraction1,const Fraction& fraction2){
        Fraction res(1,1);
        return res ;
    }
    Fraction Fraction:: operator-(double num) const{
        Fraction res(1,1);
        return res ;
    }
    Fraction operator*(const Fraction& fraction1,const Fraction& fraction2){
        Fraction res(1,1);
        return res ;
    } 
    Fraction operator*(const double doub,const Fraction& fraction1){
        Fraction res(1,1);
        return res ;
    }
    Fraction operator/(const Fraction& fraction1,const Fraction& fraction2){
        Fraction res(1,1);
        return res ;
    }
    Fraction operator/(const double doub,const Fraction& fraction1){
        //Fraction res(1,1);
        return Fraction(1,1) ;
    }

    Fraction& Fraction::operator++(){
        
        return *this;
    }
    Fraction& Fraction::operator--(){
        return *this;
    }
	const Fraction Fraction:: operator++(int){
        Fraction res(1,1);
        return res ;
    }
	const Fraction Fraction:: operator--(int){
        Fraction res(1,1);
        return res ;
    }


    bool Fraction::operator<(const Fraction& fraction){
        return false;
    }
    bool Fraction::operator<(const double& doub){
        return false;
    }
    bool Fraction::operator<=(const Fraction& fraction){
        return false;
    }
    bool Fraction::operator>(const Fraction& fraction){
        return false;
    }
    bool Fraction::operator>(const double& doub){
        return false;
    }
    bool Fraction::operator>=(const Fraction& fraction){
        return false;
    }
    bool Fraction::operator==(const Fraction& fraction){
        return false;
    }
    bool Fraction::operator!=(const Fraction& fraction){
        return false;
    }

}