#include<bits/stdc++.h> 

using namespace std;
float power(float a, int b);
float power(float a);
void display(float data);
int main()
{
    float a,d1,d2;
    int b;
    cin>>"Enter base value: ">>a>>;
    cin>>"Enter exponent value: ">>b;
    d1=power(a,b);
    d2=power(a);
    cout<<"Result for power function with exponent provided as argument: "<<display(d1);
    cout<<"Result for power function with exponent provided as default argument: "<<display(d2);
    return 0;
} 
float power(float a, int b){
    float r=1.0;
    int i;
    for(i=1;i<=b;i++) 
    r=r*a;
    return(r);
}
float power(float a){
    float r=1.0;
    int i;
    for(i=1;i<=2;i++) 
    r=r*a; 
    return(r);
    
}
void display(float data){
    cout<<data<<endl;
    
}
