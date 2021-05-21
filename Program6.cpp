//WAP to create a string class to store, add, equate and display strings.
#include<iostream>
using namespace std;
const int MAX=20;

class MyString{
private:
    char A[MAX];
public:
    MyString(){
        //cout<<"default constructor"<<endl;
    }
    void read(){
        cout<<"Enter a String: ";
        cin.getline(A,MAX);
    }
    void show(){
        cout<<A<<endl;
    }
    int length(){
        int i=0;
        for(i=0;A[i]!='\0';i++);
        return i;
    }
  
    bool equate(MyString &B){
        int i=0;
        for(i=0;A[i]!='\0';i++){
            if(B.A[i]!=A[i]){
                return false;
            }
        }
        return true;
    }
    void add(MyString &B){
        MyString temp;
        int i=0;
        cout<<"New string is: ";
        for(i=0;A[i]!='\0';i++){
            temp.A[i]=A[i];
            cout<<temp.A[i];
        }
        cout<<" ";
        for(int j=0;j<B.length();j++){
            temp.A[j]=B.A[j];
            cout<<temp.A[j];
        }        
    }
    
};

int main(){
    MyString s,r;
    s.read();
    s.show();
    r.read();
    r.show();
    if(s.equate(r)){
        cout<<"Strings are equal"<<endl;
    }else{
        cout<<"Strings are not equal"<<endl;
    }
    
    s.add(r);
    
    return 0;
   
}
