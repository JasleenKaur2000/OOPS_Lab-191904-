#include<iostream>
using namespace std;

class Dad{
protected:
    float money_from_dad;
public:
    Dad(){};
    void set_moneyfd(float money_from_dad){
        this->money_from_dad=money_from_dad;
    }
    float get_moneyfd(){
        return this->money_from_dad;
    }
    void get_money_from_dad(){
        cout<<"Enter Pocket Money recieved from dad:";
        cin>>this->money_from_dad;
    }
    void displayMoney_from_dad(){
        cout<<"Dad gave "<<this->money_from_dad<<" rupees."<<endl;
    }
};

class Mom{
protected:
    float money_from_mom;
public:
    Mom(){};
    void set_moneymd(float money_from_mom){
        this->money_from_mom=money_from_mom;
    }
    float get_moneymd(){
        return this->money_from_mom;
    }
    void get_money_from_mom(){
        cout<<"Enter Pocket Money recieved from mom:";
        cin>>this->money_from_mom;
    }
    void displayMoney_from_mom(){
        cout<<"Mom gave "<<this->money_from_mom<<" rupees."<<endl;
    }
};

class Child:public Dad,public Mom{
private:
     float Total_money;
public:
    Child(){};
    void My_Pocket_Money(){
        Total_money=money_from_mom+money_from_dad;
        cout<<"Total Pocket Money is "<<Total_money<<" rupees";
    }
};


int main(){
    Child c;
    c.get_money_from_mom();
    c.get_money_from_dad();
    c.displayMoney_from_mom();
    c.displayMoney_from_dad();
    c.My_Pocket_Money();
    return 0;
}