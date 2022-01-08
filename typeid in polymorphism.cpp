#include <iostream>
#include <typeinfo>


using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"I am from base class"<<endl;
        
    }
};
class derived: public base{
    public:
     void display(){
        cout<<"I am from derived class"<<endl;
        
    }
};

int main(){
    base *b = new derived();
    base *b1 = new base();
    cout<<typeid(base).name()<<endl;
    cout<<typeid(derived).name()<<endl;
    cout<<typeid(*b).name()<<endl;
    cout<<typeid(*b1).name()<<endl;
}