//overloading += operator

#include <iostream>
using namespace std;

class complex{
    private:
    int real;
    int imaginary;
    public:
    complex(){
        real =0;
        imaginary =0;
    }
    complex(int r, int i){
        real =r;
        imaginary =i;
    }
    void operator += (complex c1){
        real += c1.real;
        imaginary += c1.imaginary;
        
    }
    void display(){
        cout<<"Real part is "<<real<<endl;
        cout<<"imaginary part is "<<imaginary<<endl;
    }
};

int main(){
    complex c1(50,20);
    complex c2(60,70);
    c2 += c1;
    c2.display();
}
