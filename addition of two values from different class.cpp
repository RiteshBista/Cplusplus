#include <iostream>

using namespace std;
class second;
class first{
    private:
    int x;
    public:
    first(int a){
        x=a;
    }
    friend void add(first, second);
};
class second {
    private:
    int y;
    public:
     second(int a){
        y=a;
    }
    friend void add(first, second);
};
void add(first f, second s){
    cout<<"THe addition of two numbers from different class is "<<endl;
    cout<<(f.x+s.y)<<endl;
}

int main(){
    first f(20);
    second s(30);
    add(f, s);
    
}