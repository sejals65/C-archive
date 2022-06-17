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
    
    fraction add(fraction const &f2){
        int lcm = denominator * f2.denominator;
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + y * f2.numerator;
        fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }
    
    fraction multiply(fraction const &f2){
        int n = numerator * f2.numerator;
        int d = denominator * f2.denominator;
        fraction fnew(n,d);
        fnew.simplify();
        return fnew;
    }
};

int main()
{
    fraction f1(10,2);
    fraction f2(15,4);
    
    f1.display();
    
    fraction f3 = f1.add(f2);
    f3.display();
    
    fraction f4 = f1.multiply(f2);
    f4.display();
    return 0;
}
