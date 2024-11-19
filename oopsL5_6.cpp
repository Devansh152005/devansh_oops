#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    
    Complex(double r = 0.0, double i = 0.0) : real(r), imag(i) {}

   
    inline Complex multiply(const Complex& c) const {
        
        Complex result;
        result.real = this->real * c.real - this->imag * c.imag;
        result.imag = this->real * c.imag + this->imag * c.real;
        return result;
    }
    void display() const {
        cout << real << " + " << imag << "i" <<endl;
    }

    
    void setValues(double r, double i) {
        this->real = r;
        this->imag = i;
    }
};

int main() {
    Complex c1, c2, result;
    c1.setValues(3.0, 2.0);
    c2.setValues(1.0, 7.0);
    result = c1.multiply(c2);
    cout << "The result of multiplication is: ";
    result.display();

    return 0;
}
