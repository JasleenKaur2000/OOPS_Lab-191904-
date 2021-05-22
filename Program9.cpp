#include<iostream>
using namespace std;

class Complex{
    int real,img;
    public:
    Complex(){
        cout<<"Default constructor called"<<endl;
        this->real=0;
        this->img=0;
    }
    Complex(int real,int img){  // (A)to demonstrate parameterized constructor 
        cout<<"Parameterized constructor with two arguments called"<<endl;
        this->real=real;
        this->img=img;
    }
    Complex(int real){   // (B)to demostrate constructor overloading
        cout<<"Parameterized construction with one argument called"<<endl;
        this->real=real;
        this->img=0;
    }
    Complex(Complex &dummy){    // (C)to demonstrate copy constructor
        cout<<"Copy constructor called"<<endl;
        this->real=dummy.real;
        this->img=dummy.img;
    }
    void display(){
        cout<<"The complex number is "<<this->real<<" + i"<<this->img<<"."<<endl;
    }
};
int main(){
    Complex c1;
    c1.display();
    Complex c2(5,2);
    c2.display();
    Complex c3(6);
    c3.display();
    Complex c4(c2);
    c4.display();

    return 0;
}