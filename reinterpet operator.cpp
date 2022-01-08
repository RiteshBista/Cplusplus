#include <iostream>
using namespace std;


class first{
    public:
    void print(){
        cout<<"I am from first class"<<endl;
        
    }
};
class second{
public:
void print(){
    cout<<"I am from second class"<<endl;

}
    
};
int main(){
  first *f = new first();
  second *s = reinterpret_cast<second *>(f);
  s->print();
  f->print();
}