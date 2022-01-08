#include <iostream>

using namespace std;

namespace Arithmetic{
    void addition(int &a, int b){
        a = a+b;
    }
}
int main(){
    int a,b;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"Enter a number to add to the number a"<<endl;
    cin>>b;
    Arithmetic::addition(a,b);
    cout<<"The number after addition is "<<a<<endl;
    
}