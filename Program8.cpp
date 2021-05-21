#include<iostream>
using namespace std;

class shape{
    protected:
    int sides;
    public:
    void set_side(int sides){  //getter
        this->sides=sides;
    }
    int get_side(){      //setter
        return sides;
    }
    shape(){  //default constructor
        this->sides=0;
    }
    shape(int sides){     //parametrized constructor for parent class "shape"
        this->sides=sides;
    }
};

class triangle: public shape{
    public:
    triangle(int sides){      //parametrized constructor for child class "triangle"
        this->sides=sides;
    }
    void numberOfSides(){
        cout<<"The number of sides of triangle are: "<<this->sides<<endl;
    }
};

class trapezoid: public shape{
    public:
    trapezoid(int sides){      //parametrized constructor for child class "trapezoid"
        this->sides=sides;
    }
    void numberOfSides(){
        cout<<"The number of sides of trapezoid are: "<<this->sides<<endl;
    }
};

class hexagon: public shape{
    public:
    hexagon(int sides){       //parametrized constructor for child class "hexagon"
        this->sides=sides;
    }
    void numberOfSides(){
        cout<<"The number of sides of hexagon are: "<<this->sides<<endl;
    }
};

int main(){
    triangle s1(3);
    trapezoid s2(4);
    hexagon s3(6);
    s1.numberOfSides();
    s2.numberOfSides();
    s3.numberOfSides();
    return 0;    
}

    