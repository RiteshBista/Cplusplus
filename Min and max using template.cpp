#include <iostream>
using namespace std;

template<class T, int size>
class array{
    T a[size];
    public:
    void input(){
        cout<<"Enter elements"<<endl;
        for(int i=0;i<size;i++){
            cin>>a[i];
            
        }
    }
    void display(){
        cout<<"The arry is "<<endl;
        for(int i =0;i<size;i++){
            cout<<a[i]<<endl;
        }
    }
    void min(){
        T m=a[0];
        for(int i =0;i<size;i++){
            if(m>a[i]){
            m =a[i];
            }
            
        }
       cout<<"minimum value is "<<m<<endl;
    }
        void max(){
            T l;
            l =a[0];
            for(int i =0;i<size;i++){
                if(l<a[i]){
                    l =a[i];
                }
               
            }
             cout<<"THe largest number is "<<l<<endl;
        }
        
        };
        
        
int main(){
    array<int , 5>a1;
    a1.input();
    a1.display();
 
  a1.max();
 
  a1.min();
    
}
