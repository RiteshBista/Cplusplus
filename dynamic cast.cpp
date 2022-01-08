#include <iostream>
using namespace std;

class base{
    public:
    virtual void display(){
        cout<<"base class called"<<endl;
        
    }
    
};
class derived: public base{
    public:
    void display(){
        cout<<"derived class called"<<endl;
        
    }
    void display2(){
        cout<<"display2 function called"<<endl;
        
    }
};

int main(){
    base *b = new derived();
    b->display();
    derived *d = dynamic_cast<derived *>(b);
    
    if(d){
        d->display();
        d->display2();
    }
    else{
        cout<<"cant cast"<<endl;
    }
}