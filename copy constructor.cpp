#include <iostream>
using namespace std;


class complex{
    private:
    int real ;
    int imaginary;
    public:
    void print_data(){
        cout<<"Real part is "<<real<<endl;
        cout<<"imaginary part is "<<imaginary<<endl;
        
    }
    complex(int r, int i){
        real = r;
        imaginary = i;
        
    }
    complex(complex &a){
        real = a.real;
        imaginary = a.imaginary;
    }
    
};
int main(){
    complex c1(10,20);
    complex c2(40,50);
    complex c3 =c1;
    c3.print_data();
}