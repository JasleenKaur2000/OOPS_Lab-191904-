#include<iostream>
using namespace std;

class time{
private:
    int hrs,min;
public:
    time(){
    this->hrs=0; this->min=0;
    }
    time(int hrs,int min){ //parameterized constructor
        this->hrs=hrs;
        this->min=min;
}
    void set_hour(int hrs){
        this->hrs=hrs; 
    }
    void set_min(int min){
        this->min=min; 
    }
    int get_hour(){
        return this->hrs;
    }
    int get_min(){
        return this->min;
    }
    friend void addtime(time t1,time t2);
    void display(){
        cout<<"The time is "<<this->hrs<<" hours and "<<this->min<<" minutes."<<"\n";
    }
};

 void addtime(time t1,time t2){
     t1.hrs=t1.hrs+t2.hrs;
     t1.min=t1.min+t2.min;
     while(t1.min>=60){
         t1.hrs=t1.hrs+1;
         t1.min=t1.min-60;
     }
     cout<<"New time after addition is "<<t1.hrs<<" hours and "<<t1.min<<" minutes."<<endl;
 }

int main(){
    time t1(4,65);
    t1.display();
    time t2(5,53);
    t2.display();
    addtime(t1,t2);
    return 0;
}