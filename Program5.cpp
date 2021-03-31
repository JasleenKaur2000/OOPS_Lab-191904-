#include<iostream>
using namespace std;

class Account
{
private:
    long long Account_No;
    string Name;
    long long Mobile_No;
    int Balance;
public:
    void setacc(long long accn){
        Account_No=accn;
    }
    long long getacc(){
        return Account_No;
    }
    void setName(string name){
        Name=name;
    }
    string getName(){
        return Name;
    }
    void setmobile(long long mobilen){
        Mobile_No=mobilen;
    }
    long long getmobile(){
        return Mobile_No;
    }
    void setbal(int bal){
        if(bal>500)
        Balance=bal;
    }
    int getbal(){
        return Balance;
    }
    Account(){
        Account_No=00;
        Balance=0;
    }
    Account(long long accn,string name,long long mobilen,int bal){
        Account_No=accn;
        Name=name;
        Mobile_No=mobilen;
        Balance=bal;
    }

    void Register(){
        cout<<"Enter your info:"<<endl;
        cout<<"Enter your name: ";
        cin>>Name;
        cout<<"Enter your mobile number: ";
        cin>>Mobile_No;
        cout<<"Enter the amount: ";
        cin>>Balance;
        cout<<" Your alloted account number is: ";
        Account_No=rand();
        cout<<Account_No;

    }
    void Deposit(){
        int deposit=0;
        cout<<"Enter the amount to deposit: ";
        cin>>deposit;
        Balance+=deposit;
        cout<<"Your current balance is: "<<Balance<<endl;
    }
    void Withdraw(){
        int withdraw=0;
        cout<<"Enter the amout to be withdrawn: ";
        cin>>withdraw;
        if(withdraw<=(Balance-500)){
            Balance-=withdraw;
            cout<<"Your current balance is: "<<Balance<<endl;
        }else{
            cout<<"You cannot withdraw more than "<<Balance-500<<endl;
        }

    }
    void Interest(){
        cout<<"Interest on your account balance after 1 month at 2% interest rate is as: ";
        float interest=(Balance*0.02);
        cout<<interest<<endl;
        cout<<"Interest on your account balance after 1 year at 7% interest rate is as: ";
        float interest_yearly=(Balance*0.07);
        cout<<interest_yearly<<endl;
    }
    void Display_Balance(){
        cout<<"Your current balance is: "<<Balance<<endl;

    }
    void Display(){
        cout<<" Account Holder: "<<Name<<endl;
        cout<<" Account Number: "<<Account_No<<endl;
        cout<<" Mobile Number: "<<Mobile_No<<endl;
        cout<<" Current Balance: "<<Balance<<endl;
    }

    
};

int main(){
    Account customer_1;
    int choice;
    do{
        cout<<"\n\n Banking System Program"<<endl;
        cout<<"1.Create New Account"<<endl;
        cout<<"2.Deposit"<<endl;
        cout<<"3.Withdraw"<<endl;
        cout<<"4.Diplay Account Details"<<endl;
        cout<<"5.Display Balance"<<endl;
        cout<<"6.Calculate Interest"<<endl;
        cout<<"7.Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){
            case 1:customer_1.Register();
            break;
            case 2:customer_1.Deposit();
            break;
            case 3:customer_1.Withdraw();
            break;
            case 4:customer_1.Display();
            break;
            case 5:customer_1.Display_Balance();
            break;
            case 6:customer_1.Interest();
            break;
            case 7:goto end;

            default:cout<<"Invalid option";
        }
    }while(1);

    end:
    return 0;
}
