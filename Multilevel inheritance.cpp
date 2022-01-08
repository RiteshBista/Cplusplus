#include <iostream>
using namespace std;



class A{
    public:
    A(){
        cout<<"Class a called"<<endl;
    }
};
class B:  A{
    
    public:
    B(){
        cout<<"Class B called"<<endl;
    }
};
class C:  B{
     public:
    C(){
        cout<<"Class C called"<<endl;
    }
};
int main(){
    C a;
    
}