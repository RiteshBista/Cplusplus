#include <iostream>

using namespace std;
class second;
class first{
    private:
    int one;
    public:
    first(int x){
        one =x;
    }
    friend int sum(first, second);
};
class second{
    private:
    int two;
    public:
    second(int y){
        two =y;
    }
    friend int sum(first, second);
};
 

int sum(first f, second s){
    return(f.one + s. two);
    
}
int main(){
 first f(5);
 second s(6);
 cout<<"THe sum of first and second is "<<sum(f,s)<<endl;
 
}