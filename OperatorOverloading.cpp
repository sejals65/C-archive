#include <iostream>

using namespace std;

class fraction{
    int numerator;
    int denominator;
    
    public:
    
    fraction(int numerator, int denominator){
        this -> numerator = numerator;
        this -> denominator = denominator;
    }
    
    void display(){
        cout << numerator << "/" << denominator<< endl;
    }
    
    void simplify(){
        int gcd = 1;
        int j = min(numerator, denominator);
        
        for(int i = 1; i <= j; i++){
            if(numerator % i == 0 && denominator % i == 0)
            gcd = i;
        }
        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }
    
    // + Operator Overloaded 
    fraction operator+(fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + y * f2.numerator;
        fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }
    
    // * Operator Overloaded
    fraction operator*(fraction const &f2){
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }
    
    // Pre-Increment Operator(++) Overloaded
    fraction& operator++(){
        numerator = numerator + denominator;
        simplify();
        return *this;
    }
    
    //Post-Increment Operator(++) Overloaded
    fraction operator++(int){
        fraction fnew(numerator, denominator);
        fnew.simplify();
        
        numerator = numerator+denominator;
        simplify();
        return fnew;
    }
    
    //Short hand additon operator(+=) Overloaded 
    fraction& operator+=(fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int nume = (x * numerator) + (y * f2.numerator);
        numerator = nume;
        denominator = lcm;
        simplify();
        return *this;
    }
    
};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    
    f1.display();
    
    fraction f3 = f1 + f2;      //+ Operator Overloaded
    f3.display();
    
    fraction f4 = f1 * f2;      //* Operator Overloaded
    f4.display();
    
    fraction f5 = ++f1;         //Pre-Increment 
    fraction f6 = ++(++f1);     //Nesting of Pre-Increment operator
    f5.display();
    f6.display();
    f1.display();
    
    fraction f7 = f1++;         //Post-Increment
    f7.display();
    f1.display();
    
    f1 += f2;                   //Short hand additon operator(+=) Overloaded 
    f1.display();
    
    return 0;
}

