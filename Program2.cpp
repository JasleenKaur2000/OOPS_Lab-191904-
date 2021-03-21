#include<bits/stdc++.h> 

using namespace std;
inline float power(float a, int b=2){
    float r;
    r=pow(a,b);
    return r;
}
void display(float data){
    cout<<"Result is : "<<data<<endl;
    
}
int main()
{
   float a,d1,d2;
    int b;
    cout<<"Enter base value: ";
    cin>>a;
    cout<<"Enter exponent value: ";
    cin>>b;
    d1=power(a,b);
    display(d1);
    return 0;
}