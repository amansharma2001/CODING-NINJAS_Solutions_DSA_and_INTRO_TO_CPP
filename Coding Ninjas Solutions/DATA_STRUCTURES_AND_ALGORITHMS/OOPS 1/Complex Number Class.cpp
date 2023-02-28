#include <iostream>
using namespace std;
#include "ComplexNumbers.h"

class ComplexNumbers {
	private:
        int real;
        int imaginary; 
    
    
    public:
    
    	ComplexNumbers(int real, int imaginary){
            this -> real = real;
            this -> imaginary = imaginary;
        }
    	void print(){
            cout<<real<< " + " <<"i"<<imaginary;
        }
    	
    	void plus(ComplexNumbers c2){
            int real_sum = real + c2.real;
            int imaginary_sum = imaginary + c2.imaginary;
            
            real = real_sum;
            imaginary = imaginary_sum;
        }
    	
    	void multiply(ComplexNumbers c2){
            int real_multi = (real * c2.real) - (imaginary*c2.imaginary);
            int imaginary_multi = (real*c2.imaginary) + (imaginary * c2.real);
            
            real = real_multi;
            imaginary = imaginary_multi;
        }
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}