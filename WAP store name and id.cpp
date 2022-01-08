#include <iostream>
#include <cstring>
using namespace std;
class electronics;
class computer{
    private:
    int id;
    char name[20];
    public:
    computer(char *c, int i){
        strcpy(name, c);
        id =i;
    }
    void display(){
        cout<<name<<endl;
        cout<<id<<endl;
    }
};
class electronics{
    private:
    int id;
    char name[20];
    public:
    electronics(char *c, int i){
        strcpy(name, c);
        id =i;
    }
    void display(){
        cout<<name<<endl;
        cout<<id<<endl;
    }
};

int main(){
 computer c("Ram",10);
 electronics e("Shyam",20);
 c.display();
 e.display();
    
}