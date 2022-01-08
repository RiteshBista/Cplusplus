#include <iostream>
using namespace std;

class A{
    public:
    A(){
     cout<<"Class A callled"<<endl;
     
    }
};

class B{
    public:
    B(){
        cout<<"class B callled"<<endl;
        
    }
};

class C: A, B{
    public:
    C(){
        cout<<"class c callled"<<endl;
        
    }
    
};

int main(){
    C a;
}