#include <iostream>

using namespace std;

class numbers{
    private:
    int x;
    public:
    numbers(int a){
        x =a;
        
    }
    numbers(){
        
    }
    numbers operator+(numbers n1){
        numbers temp;
        temp.x = x + n1.x;   
     return temp;
    }
    void display(){
        cout<<"THe result after addition is "<<x<<endl;
            }
    
};

int main(){
    
    numbers a(5);
    numbers b(3);
    numbers c =a +b;
    c.display();
}