#include <iostream>
using namespace std;

class Minus{
    private:
    int x;
    public:
    Minus(int a){
        x =a;
    }
    void operator -(){
        x =-x;
        
    }
    void show_value(){
        cout<<"The value of x is "<<x<<endl;
        
    }
    
};
int main(){
  
    Minus m(12);
     cout<<"THe value of x initially is "<<endl;
     m.show_value();
    -m;
    cout<<"THe value of x is now"<<endl;
    m.show_value();
   
}